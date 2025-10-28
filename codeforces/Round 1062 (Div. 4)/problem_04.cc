#include <bits/stdc++.h>
using namespace std;
using int64 = long long;



int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){

        int n;
        cin>>n;

        vector<long long>a(n);
        for (int i=0; i<n; i++) {
            cin>>a[i];
        }

        vector<int>primePossible = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53};

        for(int p:primePossible){
            bool divisible=true;
            
            for(int i=0; i<n; i++){
                if(a[i]%p!=0){
                    divisible=false;
                    break;
                }
            }

            if(!divisible) {
                cout<<p<<endl;
                break;
            }
        }

    }
    return 0;
}