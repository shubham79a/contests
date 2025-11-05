#include <bits/stdc++.h>
using namespace std;


void solve(){
  int n;
  string s;
  cin >> n >> s;

  if (s[0] == '0' || s[n - 1] == '0'){
    cout << -1 << endl;
  }
  else{
    vector<int> ans;
    int start = 1;

    for (int i = 1; i <= n; ++i){
      if (s[i - 1] == '1'){
        for (int x = i; x >= start; --x){
          ans.push_back(x);
        }
        start = i + 1;
      }
    }

    for (int i = 0; i < n; ++i){
      cout << ans[i] << (i + 1 == n ? '\n' : ' ');
    }
  }
}

signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int t;
  cin >> t;
  while (t--){
    solve();
  }
  return 0;
}