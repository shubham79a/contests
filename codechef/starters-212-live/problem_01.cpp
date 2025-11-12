#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    int index=-1;
	    for(int i=0; i<n; i++){
	        if(s[i]=='0') {
	            index=i;
	            break;
	        }
	    }
	    int ans=0;
	    if(index!=-1){
	        for(int i=index; i<n; i++){
	           if(s[i]=='1') {
	                ans++;
	                
	            }
	        }
	    }
	    
	    if(index==-1) cout<<0<<endl;
	    else cout<<ans<<endl;
	    
	}

}
