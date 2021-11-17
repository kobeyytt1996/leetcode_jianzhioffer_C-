#pragma once
#include <vector>
using namespace std;

class Solution3 {
public:
    int findRepeatNumber(vector<int>& nums) {
        if (nums.size() == 0) {
            return -1;
        }
        for (int i = 0; i < nums.size(); ++i) {
            int num = nums[i];
            while (num != i) {
                if (num == nums[num]) {
                    return num;
                }
                nums[i] = nums[num];
                nums[num] = num;
                num = nums[i];
            }
        }
        return -1;
    }
};