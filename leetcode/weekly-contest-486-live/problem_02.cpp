#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> rotateElements(vector<int>& nums, int k) {
        vector<int> v;
        int n = nums.size();
        
        for (int i = 0; i < nums.size(); i += 1) {
            if (nums[i] >= 0)
                v.push_back(nums[i]);
        }

        int j = 0;
        int m = v.size();
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] >= 0) {
                nums[i] = v[(j + k) % m];
                j++;
            }
        }

        return nums;
    }
};