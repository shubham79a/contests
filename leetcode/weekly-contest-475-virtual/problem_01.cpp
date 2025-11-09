#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int result = INT_MAX;
        bool available = false;
        int n = nums.size();
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                for (int k = j + 1; k < nums.size(); k++) {
                    if (nums[i] == nums[j] && nums[j] == nums[k]) {
                        available = true;
                        result =
                            min(result, abs(i - j) + abs(j - k) + abs(k - i));
                    }
                }
            }
        }
        if (!available)
            return -1;
        return result;
    }
};