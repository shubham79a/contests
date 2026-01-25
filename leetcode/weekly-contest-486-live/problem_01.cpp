#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumPrefixLength(vector<int>& nums) {
        int n = nums.size();
        int i = n - 1;
        
        for (i = n - 1; i >= 1; i--) {
            if (nums[i] <= nums[i - 1])
                break;
        }

        return i;
    }
};