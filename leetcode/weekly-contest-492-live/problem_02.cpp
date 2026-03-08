#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int smallestBalancedIndex(vector<int>& nums) {
        int n = nums.size();

        long long maxSum = 0;
        for (auto& i : nums)
            maxSum += i;

        long long INF = maxSum + 10;
        vector<long long> productSuffix(n + 1, 1);

        for (int i = n - 1; i >= 0; i--) {
            if (productSuffix[i + 1] > INF / nums[i]) {
                productSuffix[i] = INF;
            } else {
                if (i == 1)
                    productSuffix[i] = productSuffix[i + 1];
                else
                    productSuffix[i] = productSuffix[i + 1] * nums[i];
            }
        }

        long long currentSum = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (currentSum == (productSuffix[i + 1]))
                return i;

            currentSum += nums[i];
        }

        return -1;
    }
};