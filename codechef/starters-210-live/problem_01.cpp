#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,x;
    cin>>n>>x;
    int ans=0;
    
    int temp=n-x;
    if(n>x){
        ans=temp*(temp+1)/2;
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
