#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    int appendCharacters(string s, string t) {
        int n = s.length(), m = t.length();
        vector<vector<int>> store(n, vector<int>(26, n + 1));
        store[n - 1][s[n - 1] - 'a'] = n - 1;

        for (int i = n - 2; i >= 0; i--) {
            store[i] = store[i + 1];
            store[i][s[i] - 'a'] = i;
        }

        int i = 0, j = 0;
        while (i < n && j < m) {
            if (store[i][t[j] - 'a'] == n + 1) {
                break;
            }
            i = store[i][t[j] - 'a'] + 1;
            j++;
        }

        return m - j;
    }
};

int main() {
    Solution sol;

    string s1 = "coaching", t1 = "coding";
    string s2 = "abcde", t2 = "a";
    string s3 = "z", t3 = "abcde";

    cout << "Input: s = \"coaching\", t = \"coding\" → " << sol.appendCharacters(s1, t1) << endl;
    cout << "Input: s = \"abcde\", t = \"a\" → " << sol.appendCharacters(s2, t2) << endl;
    cout << "Input: s = \"z\", t = \"abcde\" → " << sol.appendCharacters(s3, t3) << endl;

    return 0;
}
