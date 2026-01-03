#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxVal(int n, vector<vector<int>>& restrictions,
                   vector<int>& diff) {

        vector<int> ans(n, INT_MAX);
        ans[0] = 0;

        for (auto& r : restrictions) {
            ans[r[0]] = min(ans[r[0]], r[1]);
        }

        for (int i = 0; i < diff.size(); i++) {
            ans[i + 1] = min(ans[i + 1], ans[i] + diff[i]);
        }

        for (int i = diff.size() - 1; i >= 0; i--) {
            ans[i] = min(ans[i], ans[i + 1] + diff[i]);
        }

        int res = 0;
        for (auto& i : ans) {
            res = max(i, res);
        }

        return res;
    }
};