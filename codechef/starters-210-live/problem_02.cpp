#include <bits/stdc++.h>

using namespace std;

void solve() {
    int a, b;
    cin >> a >> b;

    if (a == b) cout << (2 * a) - 1 << endl;
    else cout << a + b << endl;

}

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

}