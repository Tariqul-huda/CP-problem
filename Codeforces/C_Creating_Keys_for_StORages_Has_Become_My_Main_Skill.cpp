#include <bits/stdc++.h>
using namespace std;

//        @author: TorteyPoka

#define endl '\n'
#define int long long
/*----------X----------*/

void solve() {
    int n, x;
    cin>>n>>x;
    vector<int>ans;
    bitset<31>xx = x;
    int sum = 0;
    int stBit = __lg(x) + 1;
    map<int,int>freq;

    ans.push_back(0);

    for(int i = 0; i<stBit; i++){
        if(xx[i] == 1){
            ans.push_back(1 << i);
            
            freq[1 << i] = 1;
            sum += (1 << i);
            if(!freq[sum]){
                ans.push_back(sum);
                freq[sum] = 1;    
            }
        }
    }

    sort(ans.begin(), ans.end());

    int sz = ans.size();

    if(n < sz){
        for(int i = 0; i<n-1; i++){
            cout << ans[i] << " ";
        }
        cout << x << endl;
    }
    else{
        for(int i = 0; i<sz; i++){
            cout << ans[i] << " ";
        }
        for(int i = 0; i<n-sz+1; i++){
            cout << x << " ";
        }
        cout << endl;
    }
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr), cout.tie(nullptr);
    int T, tc = 1;
    cin >> T;
    for (; tc <= T; tc++) {
        // cout << "Case " << tc << ": ";
        solve();
    }

    return 0;
}