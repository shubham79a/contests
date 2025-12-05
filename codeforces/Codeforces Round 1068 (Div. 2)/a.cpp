#include <iostream>
#include <string>
#include <algorithm>
 
using namespace std;
 
void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
 
    int sleep = 0;
    int awake = -1;
 
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            awake = max(awake, i + k);
        }
 
        if (i > awake)
        {
            sleep++;
        }
    }
    cout << sleep << "\n";
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}