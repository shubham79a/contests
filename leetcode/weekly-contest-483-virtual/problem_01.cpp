#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string largestEven(string s) {
        int ans = INT_MAX;

        for (int i = s.size() - 1; i >= 0; i--) {
            if ((s[i] - '0') % 2 == 0) {
                ans = i;
                break;
            }
        }

        if (ans == INT_MAX) {
            return "";
        }

        return s.substr(0, ans + 1);
    }
};