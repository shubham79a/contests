#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string binaryRep(int k) {
        string s;
        while (k > 0) {
            s += k % 2;
            k /= 2;
        }
        return s;
    }

    bool monoBit(string s) {
        for (int i = 1; i < s.length(); i++) {
            if (s[i] != s[i - 1])
                return false;
        }
        return true;
    }
    int countMonobit(int n) {
        vector<string> arr;
        for (int i = 0; i <= 1000; i++) {
            string str = binaryRep(i);
            arr.push_back(str);
        }

        int ans = 0;

        for (int i = 0; i <= n; i++) {
            if (monoBit(arr[i])) {
                ans++;
            }
        }

        return ans;
    }
};