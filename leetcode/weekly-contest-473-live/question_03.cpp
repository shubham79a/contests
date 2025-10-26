#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long countStableSubarrays(vector<int>& capacity) {
        int n = capacity.size();
        long long ans = 0;

        vector<long long> prefix(n);
        prefix[0] = capacity[0];

        for (int i = 1; i < n; i++) {
            prefix[i] = capacity[i] + prefix[i - 1];
        }

        map<pair<int, long long>, int> mp;

        for (int i = 2; i < n; i++) {
            mp[{capacity[i - 2], prefix[i - 2]}]++;
            int a = capacity[i];
            long long b = prefix[i - 1] - capacity[i];
            auto it = mp.find({a, b});

            if (it != mp.end()) {
                ans += it->second;
            }
        }

        // for (int i = 2; i < n; i++) {

        //
        // }

        // for (int i = 0; i < n; i++) {
        //     long long temp_sum = 0;
        //     for (int j = i + 2; j < n; j++) {
        //         temp_sum += capacity[j - 1];
        //         if (capacity[i] == capacity[j] && temp_sum == capacity[j]) {
        //             ans++;
        //         }
        //     }
        // }

        return ans;
    }
};