#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<pair<int,int>>arr(n);
	    for(int i=0; i<n; i++){
	        int a;
	        cin>>a;
	        int b;
	        cin>>b;
	        arr[i]={a,b};
	    }
	    
	    int ans=1;
	    int tempo=0;

	    
	    for(int i=0; i<n; i++){
	        if(tempo<(arr[i].first/arr[i].second)){
	            tempo=arr[i].first/arr[i].second;
	            ans=i+1;
	        }
	    }
	    cout<<ans<<endl;
	    
	    
	}

}
