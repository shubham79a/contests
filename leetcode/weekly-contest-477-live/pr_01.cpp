#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long sumAndMultiply(int n) {
        long long ans = 0;
        long long sum=0;
        while (n > 0) {
            if (n % 10 != 0) {
                ans = ans * 10 + n % 10;
            }
            sum+=n%10;
            n /= 10;
        }
        long long result = 0;
        while (ans > 0) {
            result = result * 10 + ans % 10;
            ans /= 10;
        }
        return result*sum;
    }
};