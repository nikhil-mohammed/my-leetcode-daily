#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int openCnt = 0, closeCnt = 0;
        for (char& c : s) {
            if (c == ')') closeCnt++;
        }
        
        string res;
        for (char& c : s) {
            if (c == '(') {
                if (openCnt == closeCnt) continue;
                openCnt++;
            } else if (c == ')') {
                closeCnt--;
                if (openCnt == 0) continue;
                openCnt--;
            }
            res.push_back(c);
        }
        
        return res;
    }
};

int main() {
    Solution sol;
    string s1 = "lee(t(c)o)de)";
    string s2 = "a)b(c)d";
    string s3 = "))((";

    cout << "Output 1: " << sol.minRemoveToMakeValid(s1) << endl;
    cout << "Output 2: " << sol.minRemoveToMakeValid(s2) << endl;
    cout << "Output 3: " << sol.minRemoveToMakeValid(s3) << endl;

    return 0;
}
