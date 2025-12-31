#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1,
                          int need2) {
        long long ans = 0;

        if (cost1 + cost2 > costBoth) {
            long long miniTemp = min(need1, need2);

            ans += (miniTemp * costBoth);
            need1 -= miniTemp;
            need2 -= miniTemp;

            if (need1 == 0) {
                long long toADD = min(cost2, costBoth);
                ans += (toADD * need2);
            } else {
                long long toADD = min(cost1, costBoth);
                ans += (toADD * need1);
            }
        } else {
            ans += ((long long)need1 * cost1) + ((long long)need2 * cost2);
        }

        return ans;
    }
};