#include<bits/stdc++.h>
using namespace std;

    // @author : tariq002

#define test  \
    int T, tc = 0;    \
    cin >> T; \
    while (T--)
#define faf ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define endl '\n'
#define int long long
/*------------X------------*/


int ans(int n, int m, int k) {
    if (k == 0) return 0;
    int low = 1;
    int high = max(n, m) * k; 
    while (low < high) {
        int mid = (low + high) / 2;
        int seats_per_row = (m / (mid + 1)) * mid + min(m % (mid + 1), mid);
        int total_row = n * seats_per_row;
        int seats_per_col = (n / (mid + 1)) * mid + min(n % (mid + 1), mid);
        int total_col = m * seats_per_col;
        int max_seats = min(total_row, total_col);
        if (max_seats >= k) {
            high = mid;
        } else {
            low = mid + 1;
        }
    }
    return low;
}
void crack()
{
     int n,m,k;
     cin >> n >> m >> k;
     int mm  =ans(n,m,k);
     cout<<mm<<endl;

}

int32_t main()
{
    faf auto st = clock();
    test
    {
        //cout << "Case " << ++tc << ": ";
        crack();
    }
    //cerr << 1.0 * (clock() - st) / CLOCKS_PER_SEC << endl;
    return 0;
}