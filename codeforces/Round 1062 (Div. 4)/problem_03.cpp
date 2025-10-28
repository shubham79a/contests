#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        int odd=0,even=0;

        for(int i=0;i<n;i++){
            if(arr[i]%2==0){
                even++;
            }
            else{
                odd++;
            }
        }

        if(odd>0 && even>0){
            sort(arr.begin(),arr.end());
        }
        
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }

    }
}