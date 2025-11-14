#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> A(n), B(n);
        for (int i = 0; i < n; ++i) cin >> A[i];
        for (int i = 0; i < n; ++i) cin >> B[i];
        
        vector<int> pre_min(n), pre_max(n);
        pre_min[0] = pre_max[0] = A[0];
        for (int i = 1; i < n; ++i) {
            pre_min[i] = min(pre_min[i - 1], A[i]);
            pre_max[i] = max(pre_max[i - 1], A[i]);
        }
        
        vector<int> suf_min(n), suf_max(n);
        suf_min[n - 1] = suf_max[n - 1] = B[n - 1];
        for (int i = n - 2; i >= 0; --i) {
            suf_min[i] = min(suf_min[i + 1], B[i]);
            suf_max[i] = max(suf_max[i + 1], B[i]);
        }
        
        vector<pair<int, int>> events;
        int N = 2 * n;
        for (int k = 0; k < n; ++k) {
            int lo = min(pre_min[k], suf_min[k]);
            int hi = max(pre_max[k], suf_max[k]);
            events.emplace_back(hi, lo);
        }
        
        sort(events.begin(), events.end());
        
        long long ans = 0;
        int current_max_lo = 0;
        int j = 0;
        int m = events.size();
        for (int r = 1; r <= N; ++r) {
            while (j < m && events[j].first <= r) {
                current_max_lo = max(current_max_lo, events[j].second);
                ++j;
            }
            ans += min(r, current_max_lo);
        }
        
        cout << ans << endl;
    }
    return 0;
}