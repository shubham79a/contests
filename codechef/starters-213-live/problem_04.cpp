#include <bits/stdc++.h>

using namespace std;

void solve() {
    long long N, K;
    cin >> N >> K;
    string S;
    cin >> S;

    vector < int > arr;
    for (int i = 0; i < N; i++) {
        if (S[i] != 'I')
        {
            arr.push_back(i);
        }
    }

    if (arr.empty())
    {
        cout << (N * K) - 1 << "\n";
        return;
    }
    long long internal = 0;

    for (size_t i = 0; i < arr.size() - 1; i++)
    {
        int idx = arr[i];
        int idx2 = arr[i + 1];

        long long gap = idx2 - idx - 1;

        internal += gap;

        if (S[idx] == S[idx2])
        {
            internal++;
        }
    }

    long long boundaryScore = 0;
    int last = arr.back();
    int first = arr[0];

    long long suffix = N - 1 - last;
    long long prefix = first;

    long long boundaryGap = suffix + prefix;
    boundaryScore += boundaryGap;

    if (S[last] == S[first])
    {
        boundaryScore++;
    }

    long long ans = internal * K;

    if (K > 1)
    {
        ans += boundaryScore * (K - 1);
    }

    ans += prefix + suffix;

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