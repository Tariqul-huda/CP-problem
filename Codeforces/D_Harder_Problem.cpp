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

const int N = 2e5+7;
void crack()
{
     int n;
     cin >> n;
     vector<bool>ab(N,true);
     int a[n];
     for(int i=0;i<n;i++)cin >> a[i];
    //  vector<pair<int,int>>mp;
    map<int,int>mp;
    vector<int>ans(n);
     mp[0]=a[0];
     ab[a[0]]= false;
     for(int i=0;i<n;i++){
        // if(mp.back().first!=a[i]){
        //     mp.push_back({a[i],i});
        //     ab[a[i]]= false;
        // }
        if(!mp[i] and a[0]!=a[i]){
        mp[i]=a[i];
        ab[a[i]]=false;

        }

     }
    // for(int i=1;i<=n;i++){
    //     cerr<<ab[i]<<endl;
    // }
    // for(auto i:mp){
    //     cerr<<i.first<<" "<<i.second<<endl;
    // }
    iota(ans.begin(),ans.end(),1);
    for(int i:ans)cerr<<i<<endl;
    int j =0;
    for(auto i=mp.begin();i!=mp.end();i++,j++){
        if(ans[j]!=i->first){
            swap(ans[j],ans[i->second]);
        }
    }

    // for(int i=0;i<n;i++){
    //     if(!ans[i]){
    //         for(int j=1;j<=n;j++){
    //             if(ab[j]){
    //                 ans[i] = j;
    //                 ab[j] = false;
    //                 break;
    //             }
    //         }
    //     }
    // }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    // cout<<"Hello"<<endl;




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