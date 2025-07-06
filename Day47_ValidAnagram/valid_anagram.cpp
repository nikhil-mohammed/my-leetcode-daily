#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }

        vector<int> count(26, 0);
        for (int i = 0; i < s.length(); i++) {
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
        }

        for (int val : count) {
            if (val != 0) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    Solution sol;
    cout << boolalpha;
    cout << "Input: s = \"anagram\", t = \"nagaram\" => " << sol.isAnagram("anagram", "nagaram") << endl;
    cout << "Input: s = \"rat\", t = \"car\" => " << sol.isAnagram("rat", "car") << endl;
    cout << "Input: s = \"aacc\", t = \"ccac\" => " << sol.isAnagram("aacc", "ccac") << endl;
    return 0;
}
