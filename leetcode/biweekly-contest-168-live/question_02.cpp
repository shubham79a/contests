#include <bits/stdc++.h>
#include <string>
using namespace std;

class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        int total_sum = sum;
        if (total_sum > num * 9)
            return "";
        if (total_sum < 1)
            return "";

        string result = "";
        int current_sum = total_sum;

        for (int i = 0; i < num; i++) {

            int remain_length = num - i - 1;

            for (int d = 9; d >= 0; d--) {

                if (i == 0 && num > 1 && d == 0) {
                    continue;
                }

                int remain_sum = current_sum - d;

                if (remain_sum >= 0 && remain_sum <= remain_length * 9) {
                    result += to_string(d);
                    current_sum -= d;
                    break;
                }
            }
        }
        return result;
    }
};