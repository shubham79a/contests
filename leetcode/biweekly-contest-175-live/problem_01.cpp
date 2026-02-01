#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseByType(string s) {
        vector<char> a;
        vector<char> b;
        for (auto& i : s) {
            if (i >= 'a' && i <= 'z') {
                a.push_back(i);
            } else {
                b.push_back(i);
            }
        }

        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());

        int l = 0, j = 0, k = 0;

        for (auto& i : s) {
            if (i >= 'a' && i <= 'z') {
                s[l] = a[j];
                j++;
            } else {
                s[l] = b[k];
                k++;
            }
            l++;
        }

        return s;
    }
};