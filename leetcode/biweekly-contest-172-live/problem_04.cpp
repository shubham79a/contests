#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long lastInteger(long long n) {
        long long totalBlock = n;

        long long head = 1;
        long long stepCount = 1;
        long long remaining = n;
        bool left = true;

        while (remaining > 1) {

            if (!left && remaining % 2 == 0) {
                head += stepCount;
            }

            stepCount *= 2;

            remaining = remaining - (remaining / 2);

            left = !left;
        }

        return head;
    }
};