#include <bits/stdc++.h>
using namespace std;

//        @author: TorteyPoka

#define endl '\n'
#define int long long
/*----------X----------*/

/*
    sum 1604
    tot_id = 1464345
    x / sum
    1300111 / 1604 = 810.5186
    810 * 15 = 12150
    y = x - ((x / sum) * sum);
    =1300111 - (810 * 1604) = 871
    12150 + 9 = 12159
    1464345 - 12159 = 

    0 1 2 3 4 5 6 7 8
    n = 9
*/



void solve() {
    int n, k, x;
    cin>>n>>k>>x;
    int tot_id = n*k;
    int ar[n];
    int sum = 0;
    for(int i = 0; i<n; i++){
        cin>>ar[i];

        sum += ar[i];
    }
    if(1LL*(sum * k) < x){
        cout << 0 << endl;
        return;
    }
 
    int need_id = (x / sum) * n;
    int idd = 0;
    int smm = 0;
    int y = x - ((x/sum) * sum);
    
    int cnt = 0;
    for(int i = n-1; i>=0; i--){
        if(smm >= y){
            break;
        }
        smm += ar[i];
        cnt++;
    }
    cout << tot_id - need_id - cnt+1 << endl;
}    
signed main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr), cout.tie(nullptr);
    int T = 1, tc = 1;
    cin >> T;
    for (; tc <= T; tc++) {
        // cerr << "Case " << tc << ": ";
        solve();
    }

    return 0;
}