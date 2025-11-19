#include <bits/stdc++.h>

using namespace std;

void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void solve() {
    int n;
    cin >> n;
    vector < int > arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());

    long long ans = 0;

    long long temp = arr[n - 1];
    for (int i = 0; i < n - 1; i++) {
        temp += arr[i];
        ans = max(ans, arr[n - 1] - (temp / (i + 2)));
    }

    temp = arr[0];
    for (int i = n - 1; i > 0; i--) {
        temp += arr[i];
        ans = max(ans, (temp / (n - i + 1)) - arr[0]);
    }

    cout << ans << endl;
}

int main() {
    fast_io();

    int t = 1;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}