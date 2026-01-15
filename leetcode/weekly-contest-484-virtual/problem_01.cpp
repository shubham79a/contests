#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int residuePrefixes(string s) {
        unordered_map<char, int> m;
        int count = 0, ans = 0;

        for (int k = 0; k < s.length(); k++) {
            char i = s[k];
            if (m.count(i)) {
                m[i]++;
            } else {
                m[i] = 1;
                count++;
            }
            if (count == (k + 1) % 3) {
                ans++;
            }
        }

        return ans;
    }
};
