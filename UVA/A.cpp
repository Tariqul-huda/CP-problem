#include <bits/stdc++.h>
using namespace std;

signed main() {
    int T = 1;
    cin >> T;
    while(T--) {
        int n, q;
        cin>>n>>q;
        string s;
        cin>>s;
        string ans = s;
        while(q--){
            int pos; cin>>pos;
            char c; cin>>c;
            s[pos-1] = c;
            // cerr << ss << " " << s << el;
            ans = (ans < s ? ans : s);
        }
        cout << ans << "\n";
    }

    return 0;
}