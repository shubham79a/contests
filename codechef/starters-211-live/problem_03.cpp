#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector < int > arr;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            arr.push_back(a);
        }

        int p = 0;
        int q = n - 1;
        sort(arr.begin(), arr.end());
        vector < int > ans;

        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                ans.push_back(arr[q]);
                q--;
            }
            else {
                ans.push_back(arr[p]);
                p++;
            }
        }

        for (auto a: ans) {
            cout << a << " ";
        }

        cout << endl;
    }
}