#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        unordered_map<int, vector<int>> map;
        int result = INT_MAX;
        for (int i = 0; i < nums.size(); i++) {
            map[nums[i]].push_back(i);
        }

        for (const auto& pair : map) {
            int key = pair.first;
            const vector<int>& value_vector = pair.second;
            if (value_vector.size() < 3)
                continue;
            for (int i = 0; i < value_vector.size() - 2; i++) {
                result = min(
                    result, abs(value_vector[i] - value_vector[i + 1]) +
                                abs(value_vector[i + 1] - value_vector[i + 2]) +
                                abs(value_vector[i + 2] - value_vector[i]));
            }
        }
        if (result == INT_MAX)
            return -1;
        return result;
    }
};