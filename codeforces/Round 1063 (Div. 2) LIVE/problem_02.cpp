#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>

using namespace std;

// Helper function to solve a single test case
void solve() {
    int n;
    cin >> n;
    
    // Use 1-based indexing to match problem statement
    vector<int> p(n + 1);
    int pos1 = -1, posn = -1;
    for (int i = 1; i <= n; i++) {
        cin >> p[i];
        if (p[i] == 1) {
            pos1 = i;
        }
        if (p[i] == n) {
            posn = i;
        }
    }
    
    string x;
    cin >> x;
    // Pad string to use 1-based indexing
    x = " " + x;

    // --- 1. Check for "impossible" cases ---
    // The operation l < i < r means i can never be 1 or n.
    // If x requires a '1' at these positions, it's impossible.
    if (x[1] == '1' || x[n] == '1') {
        cout << -1 << endl;
        return;
    }

    // --- 2. Define the fixed set of "landmark" operations ---
    // We use a set to automatically handle duplicate pairs (e.g., if pos1=1)
    set<pair<int, int>> ops_set;
    
    // Add pairs of landmarks: (1, pos1), (1, posn), (n, pos1), (n, posn)
    ops_set.insert({min(1, pos1), max(1, pos1)});
    ops_set.insert({min(1, posn), max(1, posn)});
    ops_set.insert({min(n, pos1), max(n, pos1)});
    ops_set.insert({min(n, posn), max(n, posn)});
    
    // This is the tricky 5th op that is needed for some cases
    ops_set.insert({min(pos1, posn), max(pos1, posn)});


    // --- 3. Simulate all operations ---
    vector<int> s(n + 1, 0); // Our simulated string 's'
    vector<pair<int, int>> final_ops; // List of ops we actually use

    for (auto op : ops_set) {
        int l = op.first;
        int r = op.second;

        // If l==r, the operation is l < i < r, which is impossible.
        if (l == r) {
            continue;
        }

        // Add this valid operation to our final list
        final_ops.push_back(op);

        int p_min = min(p[l], p[r]);
        int p_max = max(p[l], p[r]);

        // Apply the operation
        for (int i = l + 1; i < r; i++) {
            if (p[i] > p_min && p[i] < p_max) {
                s[i] = 1;
            }
        }
    }

    // --- 4. Check if the result is valid ---
    // We must satisfy: if x[i] == 1, then s[i] must be 1.
    bool ok = true;
    for (int i = 1; i <= n; i++) {
        if (x[i] == '1' && s[i] == 0) {
            ok = false;
            break;
        }
    }

    // --- 5. Output the result ---
    if (ok) {
        cout << final_ops.size() << endl;
        for (auto op : final_ops) {
            cout << op.first << " " << op.second << endl;
        }
    } else {
        cout << -1 << endl;
    }
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}