#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long countPairs(vector<string>& words) {
        int m = words[0].size();

        unordered_map<string, int> map;

        for (auto& x : words) {
            string s = "";
            for (int i = 1; i < m; i++) {
                int t = x[i] - x[i - 1];
                if (t < 0)
                    t += 26;
                char temp = (char)t + 'a';
                s += temp;
            }
            map[s]++;
        }

        long long ans = 0;

        for (auto& x : map) {
            long long temp = (long long)x.second;
            ans += ((temp) * (temp - 1)) / 2;
        }

        return ans;
    }
};
