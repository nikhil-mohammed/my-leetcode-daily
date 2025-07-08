#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = s.length(), m = t.length();
        if (m == 0) return n == 0;

        vector<vector<int>> store(m, vector<int>(26, m + 1));
        store[m - 1][t[m - 1] - 'a'] = m - 1;

        for (int i = m - 2; i >= 0; i--) {
            store[i] = store[i + 1];
            store[i][t[i] - 'a'] = i;
        }

        int i = 0, j = 0;
        while (i < n && j < m) {
            j = store[j][s[i] - 'a'] + 1;
            if (j > m) return false;
            i++;
        }

        return i == n;
    }
};

int main() {
    Solution sol;

    string s1 = "abc", t1 = "ahbgdc";
    string s2 = "axc", t2 = "ahbgdc";
    string s3 = "", t3 = "abc";
    string s4 = "a", t4 = "";

    cout << boolalpha;
    cout << "s: \"abc\", t: \"ahbgdc\" → " << sol.isSubsequence(s1, t1) << endl;
    cout << "s: \"axc\", t: \"ahbgdc\" → " << sol.isSubsequence(s2, t2) << endl;
    cout << "s: \"\", t: \"abc\" → " << sol.isSubsequence(s3, t3) << endl;
    cout << "s: \"a\", t: \"\" → " << sol.isSubsequence(s4, t4) << endl;

    return 0;
}
