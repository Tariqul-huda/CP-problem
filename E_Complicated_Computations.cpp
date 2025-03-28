#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a) cin >> x;

    const int INF = n;
    vector<int> first(n + 2, INF);
    vector<int> last(n + 2, -1);

    for (int i = 0; i < n; ++i) {
        int x = a[i];
        if (first[x] == INF) first[x] = i;
        last[x] = i;
    }

    // Check for m=1
    if (first[1] == INF) {
        cout << 1 << '\n';
        return 0;
    } else {
        bool all_one = true;
        for (int x : a) {
            if (x != 1) {
                all_one = false;
                break;
            }
        }
        if (all_one) {
            cout << 1 << '\n';
            return 0;
        }
    }

    for (int m = 2; m <= n + 1; ++m) {
        // Check if m-1 is present and m is not present
        if (first[m] == INF && first[m-1] != INF) {
            cout << m << '\n';
            return 0;
        }
        // Check if m is present and there's a k < m with last[k] < first[m]
        if (first[m] != INF) {
            for (int k = 1; k < m; ++k) {
                if (first[k] == INF) continue;
                if (last[k] < first[m]) {
                    cout << m << '\n';
                    return 0;
                }
            }
        }
    }

    // If all checks passed (unlikely), the answer is n+2
    cout << n + 2 << '\n';
    return 0;
}