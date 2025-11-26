#include <bits/stdc++.h>
using namespace std;

void solve() {
    int N;
    cin >> N;

    vector < int > arr(N);
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }
    vector < int > brr(N);
    for (int i = 0; i < N; ++i) {
        cin >> brr[i];
    }

    if (N == 1) {
        cout << "YES" << endl;
        return;
    }

    bool possible = true;
    for (int i = 0; i < N - 1; ++i) {
        bool orderA = arr[i] < arr[i + 1];
        bool orderB = brr[i] < brr[i + 1];

        if (orderA != orderB) {
            possible = false;
            break;
        }
    }

    if (possible) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
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