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
     int n,k;
     cin >> n >> k;
     if(n>=k){
        int sum = 0;
        for(int i=0;i<k;i++){
            int x,y;
            cin >> x >> y;
            sum+=y;
        }
        cout<<sum<<endl;
     }
     else{
        vector<pair<int,int>>pp;
        for(int i=0;i<k;i++){
            int x,y;
            cin >> x >> y;
            pp.push_back({y,x});
        }
        sort(pp.begin(),pp.end(),greater<pair<int,int>>());
        int cc = 1;
        int sum =pp[0].first;
        int prev=pp[0].second;
        for(int i=1;i<k;i++){
            
            if(cc==n)break;
            if(pp[i].second!=prev){
                cc++;
                sum+=pp[i].first;
                
            }
            else{
                sum+=pp[i].first;
            }
            prev = pp[i].second;
        }
        cout<<sum<<endl;
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