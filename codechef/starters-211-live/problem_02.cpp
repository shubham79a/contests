#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string arr;
        cin >> arr;
        int ans = 0;

        for(int i=0; i<n; i++){
            if(arr[i]=='1'){
                break;
            }
            if(arr[i]=='0') ans++;
        }
        cout << ans << endl;
    }

}