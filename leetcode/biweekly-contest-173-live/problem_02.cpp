#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minLength(vector<int>& nums, int k) {
        int l = 0, r = 0, n = nums.size();

        int minLen = INT_MAX;
        long long sum = 0;

        unordered_map<int, int> freq;

        for (r = 0; r < n; r++) {
            int val = nums[r];
            freq[val]++;
            if (freq[val] == 1) {
                sum += val;
            }

            while (sum >= k) {
                minLen = min(minLen, r - l + 1);
                int leftValue = nums[l];

                freq[leftValue]--;

                if (freq[leftValue] == 0) {
                    sum -= leftValue;
                }
                l++;
            }
        }
        return minLen == INT_MAX ? -1 : minLen;
    }
};