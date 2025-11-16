#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minLengthAfterRemovals(string s) {
        int x=0,y=0;
        for(auto &a:s)
            {
                if(a=='a') x++;
                else y++;
            }
        return (s.length()-2*min(x,y));
    }
    
};