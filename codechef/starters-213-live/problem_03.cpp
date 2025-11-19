#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	    
	    vector<int>arr(n);
	    
	    int l=0;
	    int r=0;
	    int e=0;
	    for(int i=0; i<n; i+=1){
	        cin>>arr[i];
	        if(arr[i]>x) r++;
	        else if(arr[i]<x) l++;
	        else e++;
	    }

	    
	    if(l>0 && r>0 && e==0){
	        cout<<"No"<<endl;
	    }
	    else {
	        cout<<"Yes"<<endl;
	    }
	    
	    
	    
	    
	}

}
