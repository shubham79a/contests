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
	    for(int i=0; i<n; i++) cin>>arr[i];
	    
	    unordered_map<int,int> map;
        int operations = 0;
        
        for (int i = n - 1; i >= 0; --i) {
            if (map.find(arr[i])!=map.end()) {
                operations++;
                map.clear();
            }
    
            map[arr[i]]++;
        }
        cout<<operations<<endl;
	    
	}

}
