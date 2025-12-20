#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumSum(vector<int>& nums) {
        vector<int> rem0;
        vector<int> rem1;
        vector<int> rem2;

        int n = nums.size();

        sort(nums.begin(), nums.end());

        for (int i = n - 1; i >= 0; i--) {
            if (nums[i] % 3 == 0 && rem0.size() < 3) {
                rem0.push_back(nums[i]);
            }
            if (nums[i] % 3 == 1 && rem1.size() < 3) {
                rem1.push_back(nums[i]);
            }
            if (nums[i] % 3 == 2 && rem2.size() < 3) {
                rem2.push_back(nums[i]);
            }
        }

        // all rem0
        // all rem2
        // all rem1
        // one rem1 one rem2 one rem0

        int ans = 0;
        if (rem0.size() > 2)
            ans = max(ans, rem0[0] + rem0[1] + rem0[2]);
        if (rem1.size() > 2)
            ans = max(ans, rem1[0] + rem1[1] + rem1[2]);
        if (rem2.size() > 2)
            ans = max(ans, rem2[0] + rem2[1] + rem2[2]);
        if (rem0.size() > 0 && rem1.size() > 0 && rem2.size() > 0) {
            ans = max(ans, rem0[0] + rem1[0] + rem2[0]);
        }

        return ans;
    }
};