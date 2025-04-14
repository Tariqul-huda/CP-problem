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

const int limit = 1e4;
void crack()
{
     int n;
     cin >> n;
     vector<int>arr(n);
     int mx=-1,mn=LLONG_MAX;

     for(int i =0;i<n;i++){
        cin>> arr[i];
        mx = max(mx,arr[i]);
        mn = min(mn,arr[i]);
     }
     int max_gcd = mx-mn;
    // //  cerr<<mx<<" " <<mn<<endl;
    //  for(int i =1;i<=limit;i++){
    //     if(__gcd(mx+i,mn+i)>max_gcd){
    //         max_gcd = __gcd(mx+i,mn+i);

    //     }
    //  }
     cout<<max_gcd<<endl;


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