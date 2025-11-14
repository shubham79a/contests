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


// bob > boy
void solve(){
    int n,a;
    in n;
    in a;
    vector<int>arr(n);
    input(arr);
    
    int p=a+1;
    int q=a-1;

    int d1=0;
    int d2=0;
    for(int i=0; i<n; i++){
        if(abs(arr[i]-p)<abs(arr[i]-q)){
            d1++;
        }
        else if(abs(arr[i]-p)>abs(arr[i]-q)){
            d2++;
        }
    }


    if(d1>=d2) cout<<p<<endl;
    else cout<<q<<endl;


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
