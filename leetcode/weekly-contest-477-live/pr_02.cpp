#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxBalancedSubarray(vector<int>& nums) {
        int n = nums.size();
        int prefixXor=0;
        int evenOdd=0;
        // even +1 odd -1

        int maxLen = 0;
        unordered_map<long long, int> m;
        m[0] = -1;

        auto hashPair = [&](int x, int y) -> long long {
            return ((long long)x << 32) ^ (long long)y;
        };

        for (int i = 0; i < n; i++) {
            if (nums[i] % 2 == 0)
                evenOdd = evenOdd + 1;
            else
                evenOdd = evenOdd - 1;

            prefixXor = prefixXor ^ nums[i];

            long long key = hashPair(prefixXor, evenOdd);

            if (m.count(key)) {
                int prevIndex = m[key];
                maxLen = max(maxLen, i - prevIndex);
            } else {
                m[key] = i;
            }
        }

        return maxLen;
    }
};