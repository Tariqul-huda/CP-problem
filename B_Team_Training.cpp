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


void crack()
{
     int n,x;
     cin >> n >> x;
     vector<int> arr(n);
     for(int i =0;i<n;i++)cin>>arr[i];
     sort(arr.begin(),arr.end(),greater<int>());
     int cnt = 0;
     
     for(int i =0;i<n;i++){

        if(arr[i]>=x){
            cnt++;
            // cout<<i<<endl;
        }
        else{
            int sz = 2;
            int minn = min(LLONG_MAX,arr[i]);
            // cerr<<minn<<endl;
            int j;
            for( j =i+1;j<n;j++){
                if(sz*min(minn,arr[j])>=x){
                    // cerr<<arr[j]<<endl;
                    
                    cnt++;
                    break;
                }
                minn = min(minn,arr[j]);
                sz++;
            }
            i = j;
            // cerr<<i<<endl;
        }
     }
     cout<<cnt<<endl;
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