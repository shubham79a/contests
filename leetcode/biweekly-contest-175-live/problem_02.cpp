#include <bits/stdc++.h>
using namespace std;

class Solution {
    bool nonPos(vector<int>& nums, long long k) {
        long long sq = k * k;
        long long op = 0;
        for (auto& i : nums) {
            op += (i + k - 1) / k;

            if (op > sq)
                return false;
        }

        return sq >= op;
    }

public:
    int minimumK(vector<int>& nums) {
        
        long long low = 1;
        long long high = 100000;

        int ans = high;

        while (low <= high) {
            long long mid = low + (high - low) / 2;

            if (mid == 0) {
                low = 1;
                continue;
            }

            if (nonPos(nums, mid)) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return ans;
    }
};