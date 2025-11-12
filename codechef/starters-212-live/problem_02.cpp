#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    
	    int n;
	    cin>>n;
	    vector<int> arr(n);
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	    }
	    
	    vector<int>ans(n,0);
	    
	    for(int i=0; i<n; i++){
	        for(int j=0; j<=i ;j++){
	            if(arr[j]<arr[i]){
	                ans[i]++;
	            }
	        }
	    }
	    vector<int>ans2(n,0);
	    for(int i=n-1; i>=0; i--){
	        for(int j=n-1; j>=i; j--){
	            if(arr[j]<arr[i]){
	                ans2[i]++;
	            }
	        }
	    }
	    int count=0;
	    
	    for(int i=0; i<n; i++){
	        count+=min(ans[i],ans2[i]);
	    }
	    
	    cout<<count<<endl;
	    
	    
	}

}
