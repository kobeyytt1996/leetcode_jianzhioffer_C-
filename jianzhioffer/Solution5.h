#pragma once
#include <string>
using std::string;

class Solution {
public:
    string replaceSpace(string s) {
        if (s.size() == 0) {
            return "";
        }

        int spaceNum = 0;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == ' ') {
                ++spaceNum;
            }
        }
        int oldSize = s.size();
        int newSize = s.size() + 2 * spaceNum;
        s.resize(newSize);
        int j = newSize - 1;

        for (int i = oldSize - 1; i >= 0; --i) {
            if (s[i] != ' ') {
                s[j] = s[i];
                --j;
            }
            else {
                s.replace(j - 2, 3, "%20");
                j -= 3;
            }
        }

        return s;
    }
};