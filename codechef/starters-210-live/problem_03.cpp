#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

// gemini 

using ll = long long;

void solve() {
    int n;
    cin >> n;

    vector<pair<ll, int>> pairs(n);
    for (int i = 0; i < n; ++i) {
        cin >> pairs[i].first;
        pairs[i].second = i + 1;
    }

    sort(pairs.begin(), pairs.end());
    vector<ll> ans(n);

    int smallindex = pairs[0].second;
    ans[smallindex - 1] = -1;

    int largeindex = pairs[n - 1].second;
    ans[largeindex - 1] = -1;

    for (int k = 1; k < n - 1; ++k) {
        ll prev = pairs[k - 1].first;
        ll curr = pairs[k].first;
        ll next = pairs[k + 1].first;
        int current_orig_index = pairs[k].second;

        ll a = (curr + next) / 2;
        ll b = (prev + curr) / 2 + 1;

        ll count = a - b + 1;
        ans[current_orig_index - 1] = count;
    }

    for (int i = 0; i < n; ++i) {
        cout << ans[i] << (i == n - 1 ? "" : " ");
    }
    cout << endl;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}