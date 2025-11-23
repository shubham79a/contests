#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int totalWaviness(int num1, int num2) {
        int count = 0;
        for (int i = num1; i <= num2; i++) {
            int temp = i;
            if (i < 100)
                continue;
            else {
                string s = "";
                while (temp > 0) {
                    s += (temp % 10) + '0';
                    temp /= 10;
                }
                reverse(s.begin(), s.end());
                for (int j = 1; j < s.length() - 1; j++) {
                    if ((s[j] < s[j - 1] && s[j] < s[j + 1]) ||
                        (s[j] > s[j - 1] && s[j] > s[j + 1])) {
                        count++;
                    }
                }
            }
        }
        return count;
    }
};