#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
#define sort(v) sort(v.begin(),v.end())
#define rsort(v) sort(v.rbegin(),v.rend())
#define input(v) for(auto &x:v) cin>>x;
#define output(v) for(auto x:v) cout<<x<<" "; cout<<endl;
#define in cin>>
#define out cout<< 


void solve(){
    string s;
    cin>>s;

    int n = s.length();

    if(n==1) {
        cout<<1<<endl;
        return;
    };
    
    bool infinite = false;
    for (int i = 0; i < n - 1; i++) {
        if (s[i] == '>' && s[i+1] == '<') infinite = true;
        if (s[i] == '>' && s[i+1] == '*') infinite = true;
        if (s[i] == '*' && s[i+1] == '<') infinite = true;
        if (s[i] == '*' && s[i+1] == '*') infinite = true;
        if (infinite) break; 
    }
    if (infinite) {
        cout<<-1<<endl;
        return;
    }


    int less=0;
    int gret=0;
    int e=0;

    for(int i=0; i<n; i++){
        if(s[i]=='<') less++;
        else if(s[i]=='>') gret++;
        else e++;
        
    }

    if(e >= 2) cout<<-1<<endl;

    else if(less>gret) cout<<less+e<<endl;
    else cout<<gret+e<<endl;


}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
