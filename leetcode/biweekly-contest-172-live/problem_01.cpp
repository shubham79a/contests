#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_set<int> m;
        int lastDuplicate = -1;
        int counting = 0;
        for (int i = nums.size() - 1; i >= 0; i--) {
            if (m.count(nums[i])) {
                lastDuplicate = i;
                break;
            }
            m.insert(nums[i]);
        }

        if (lastDuplicate == -1)
            return 0;

        return (lastDuplicate / 3) + 1;
    }
};