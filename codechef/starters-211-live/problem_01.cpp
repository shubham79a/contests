#include <bits/stdc++.h>
using namespace std;

void solve(){
    int w,p,k;
    cin>>w>>p>>k;
    int ans=0;
    if(k<=w) ans=k*2;
    else{
        ans=w*2;
        k=k-w;
        if(k<=p){
            ans+=k;
            
        }
        else{
            ans+=p;
        }
    }
    cout<<ans<<endl;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    solve();
	}
}
