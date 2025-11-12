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
	    
	    int count00=0;
	    int count11=0;
	    int count101=0;
	    
	    for(int i=1; i<n; i++){
	        if(s[i]=='0' && s[i-1]=='0') count00++;
	        if(s[i]=='1' && s[i-1]=='1') count11++;
	    }
	    int ans=0;
	    for(int i=2; i<n; i++){
	        if(s[i]=='1' && s[i-1]=='0' && s[i-2]=='1') count101++;
	    }
	    
	    if(count00<=count11){
	        cout<<0<<endl;
	    }
	    else{
	        int k = count00-count11;
	        int end0=0, mid0=0;
	        for(int i=0; i<n; i++){
	            if(s[i]=='0'){
	                if(i==0 || i==n-1) end0++;
	                else mid0++;
	            }
	        }
	        
	        int result=0;
	        int midFlipNeeded=(k+1)/2;
	        
	        long long midUsed=min(midFlipNeeded,mid0);
	        
	        result+=midUsed;
	        
	        k-=midUsed*2;
	        
	        if(k>0){
	            result+=k;
	        }
	        cout<<result<<endl;
	    }
	    
	    
	    
	}

}
