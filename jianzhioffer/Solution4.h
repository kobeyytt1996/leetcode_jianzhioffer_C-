#pragma once
#include <vector>
using std::vector;

class Solution {
public:
    bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
        if (matrix.size() == 0 || matrix[0].size() == 0) {
            return false;
        }

        int m = matrix.size(), n = matrix[0].size();
        int i = 0, j = n - 1;
        while (i < m && j >= 0) {
            int mid = matrix[i][j];
            if (mid == target) {
                return true;
            }
            else if (mid < target) {
                ++i;
            }
            else {
                --j;
            }
        }

        return false;
    }
};