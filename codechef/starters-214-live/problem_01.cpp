#include <iostream>

using namespace std;

void solve() {
    int N;
    cin >> N;
    if (N <= 2) {
        cout << 0 << endl;
        return;
    }
    long long ans = 0;
    if (N % 2 == 0) {
        long long k = (N - 2) / 2;
        ans = k * k;
    } else {
        long long k = (N - 3) / 2;
        ans = k * (k + 1);
    }
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}