#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mirrorDistance(int n) {
        long long temp = n;
        long long revn = 0;
        while (temp > 0) {
            revn = revn * 10 + (temp % 10);
            temp /= 10;
        }

        return abs(n - revn);
    }
};