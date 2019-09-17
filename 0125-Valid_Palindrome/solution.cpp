#include <string>
using namespace std;


class Solution {
public:
    bool isPalindrome(string s) {
        string finalString = "";
        for(char & c : s)
            if(isalnum(c))
                finalString.push_back(tolower(c));
        //cout << finalString << endl;
        int i = 0, j = finalString.size() - 1;
        for( ;i <= j && finalString[i] == finalString[j]; ++i, --j);
        return i > j;
    }
};