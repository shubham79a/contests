#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    long long minCost(string s, vector<int>& cost) {
        int n = s.length();
        long long totalCost = 0;

        vector<long long> costs(26, 0);

        for (int i = 0; i < n; i++) {
            totalCost += cost[i];
            costs[s[i] - 'a'] += cost[i];
        }

        long long maxCosts = costs[0];
        for (auto& i : costs) {
            maxCosts = max(maxCosts, i);
        }

        return (totalCost - maxCosts);
    }
};