#pragma once
using namespace std;

class Solution3_1 {
public:
    int findRepeatNumber(int nums[], const int &length) {
        if (nums == nullptr || length <= 0) {
            return -1;
        }
        int left = 1, right = length - 1;
        int sNum = 0, eNum = 0, lNum = 0;
        while (left < right)
        {
            int mid = left + (right - left) / 2;
            for (int i = 0; i < length; ++i) {
                if (nums[i] == mid) {
                    ++eNum;
                    if (eNum > 1) {
                        return eNum;
                    }
                }
                else if (nums[i] < mid && nums[i] >= left) {
                    ++sNum;
                }
                else if (nums[i] > mid && nums[i] <= right) {
                    ++lNum;
                }
            }
            if (lNum > right - mid) {
                left = mid + 1;
            }
            else if (sNum > mid - left) {
                right = mid - 1;
            }

            sNum = 0;
            eNum = 0;
            lNum = 0;
        }

        return left;
    }
};