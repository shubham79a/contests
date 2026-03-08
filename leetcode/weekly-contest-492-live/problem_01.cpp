#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumIndex(vector<int>& capacity, int itemSize) {
        int minCapacity = INT_MAX;
        int index = -1;

        for (int i = capacity.size() - 1; i >= 0; i--) {
            if (capacity[i] >= itemSize) {
                if (minCapacity >= capacity[i]) {
                    minCapacity = capacity[i];
                    index = i;
                }
            }
        }

        return index;
    }
};