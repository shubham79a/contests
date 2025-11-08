#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int count = 0;
        int n = nums.size();
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == target) {
                count = 1;
                break;
            }
        }
        if (count == 0)
            return 0;

        int ans = 0;

        for (int i = 0; i < n; i++) {
            int c = 0;
            for (int j = i; j < n; j++) {
                if (nums[j] == target)
                    c++;
                if (c * 2 > (j - i + 1))
                    ans++;
            }
        }

        return ans;
    }
};