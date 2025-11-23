#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumFlips(int n) {
        int ct = 0;
        int temp = n;
        string str = "";
        while (temp != 0) {
            int dig = temp & 1;
            str += ('0' + dig);
            temp = temp >> 1;
        }
        string str2 = str;
        reverse(str2.begin(), str2.end());

        for (int i = 0; i<str.length(); i++) {
            if (str[i] != str2[i]) {
                ct++;
            }
        }
        return ct;
    }
};