#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    
	    vector<int>arr(n);
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	    }
	    
	    
	    vector<int>freq(5,0);
	    
	    for(int i=0; i<n; i++){
	        freq[arr[i]]++;
	    }
	    
	    if(freq[2]<2) 
	        cout<<min(freq[1],freq[3])<<endl;
	    else 
	        cout<<min(freq[1],freq[3])+((freq[2])-1)<<endl;
	    
	}

}
