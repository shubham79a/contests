#include <bits/stdc++.h>
#include <string>
using namespace std;

class Solution {
public:
    string lexSmallest(string s) {
        if (s.length() == 1)
            return s;
        if (s.length() == 2) {
            string ans;
            if (s[0] > s[1]) {
                ans += s[1];
                ans += s[0];
                return ans;
            } else
                s;
        }
        int n = s.length();
        string best_string = s;

        int k = 1;
        for (k = 1; k <= n; k++) {
            string s1 = s;
            reverse(s1.begin(), s1.begin() + k);
            string s2 = s;
            reverse(s2.begin() + n - k, s2.end());

            best_string = min(best_string, s1);
            best_string = min(best_string, s2);
        }
        return best_string;
    }
};