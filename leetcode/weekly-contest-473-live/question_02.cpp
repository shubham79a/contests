#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < 0)
                nums[i] = nums[i] * (-1);
        }
        sort(nums.begin(), nums.end());

        int i = 0, j = nums.size() - 1;
        long long ans = 0;
        while (i <= j) {
            if (i == j) {
                ans += nums[j] * nums[j];
                j--;
                break;
            }
            ans += nums[j] * nums[j];
            ans -= nums[i] * nums[i];
            i++;
            j--;
        }

        return ans;
    }
};