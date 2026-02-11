#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<long long> mergeAdjacent(vector<int>& nums) {
        vector<long long> s;

        for (int i = 0; i < nums.size(); i++) {
            long long temp = nums[i];
            while (!s.empty() && s.back() == temp) {
                temp *= 2;
                s.pop_back();
            }
            s.push_back(temp);
        }

        return s;
    }
};