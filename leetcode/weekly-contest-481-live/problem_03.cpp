#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minSwaps(vector<int>& nums, vector<int>& forbidden) {
        unordered_map<int, int> freqCounts;
        unordered_map<int, int> freqForbidden;

        int n = nums.size();

        for (auto& x : nums)
            freqCounts[x]++;
        for (auto& x : forbidden)
            freqForbidden[x]++;

        for (auto const& [a, b] : freqCounts) {
            if ((long long)b + freqForbidden[a] > n)
                return -1;
        }

        int totalEqual = 0;
        int maxiEqual = 0;
        unordered_map<int, int> m;
        for (int i = 0; i < n; i++) {
            if (forbidden[i] == nums[i]) {
                totalEqual++;
                m[nums[i]]++;
                maxiEqual = max(maxiEqual, m[nums[i]]);
            }
        }

        if (totalEqual == 0)
            return 0;

        int swaping = min(totalEqual / 2, totalEqual - maxiEqual);

        return totalEqual - swaping;
    }
};