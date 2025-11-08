#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        int maxi = nums[0];
        for (int i = 0; i < n; i++) {
            if (nums[i] > maxi) {
                maxi = nums[i];
            }
        }
        int ans = 0;
        for (auto i : nums) {
            ans += (maxi - i);
        }
        return ans;
    }
};