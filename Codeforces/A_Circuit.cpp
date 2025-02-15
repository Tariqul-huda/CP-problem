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
     int n;
     cin >> n;
     map<int,int>mp;
     for(int i=0;i<2*n;i++){
        int x;
        cin >> x;
        mp[x]++;
     }
     if(mp[0]==mp[1]){
        cout<<1<<" "<<mp[1]<<endl;
     }
     else if(!mp[0]){
        cout<<n<<" "<<n<<endl;
     }
     else if(!mp[1]){
        cout<<0<<" "<<0<<endl;
     }
     else{
        cout<<0<<" "<<min(mp[0],mp[1])<<endl;
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