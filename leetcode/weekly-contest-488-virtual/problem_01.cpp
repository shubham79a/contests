#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int dominantIndices(vector<int>& nums) {
        long long sum = 0;
        int n = nums.size();
        int count = 0;

        for (auto& i : nums) {
            sum += i;
        }

        long long temp = sum;

        for (int i = 0; i < n - 1; i++) {
            temp -= nums[i];
            long long average = (temp / (n - i - 1));
            if (nums[i] > average) {
                count++;
            }
        }

        return count;
    }
};