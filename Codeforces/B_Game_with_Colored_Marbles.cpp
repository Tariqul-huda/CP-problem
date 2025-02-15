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

bool cmp(pair<int,int>&a,pair<int,int>&b){
    return a.second<b.second;
}
void crack()
{
     int n;
     cin >> n;
     
     int a[n];
     map<int,int>mp;
     for(int i=0;i<n;i++){
        
        cin >> a[i];
        mp[a[i]]++;
     }
     vector<pair<int,int>>mps;
    for(auto i:mp){
        
        mps.push_back({i.second,i.first});
    }
    sort(mps.begin(),mps.end());
     for(auto i:mps){
        cout<<i.first<<" "<<i.second<<endl;
     }

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