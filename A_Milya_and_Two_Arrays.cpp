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
     set<int>ab,bc;
     for(int i=0;i<n;i++){
        int x;
        cin >> x;
        ab.insert(x);
     }
     for(int i=0;i<n;i++){
        int x;
        cin >> x;
        bc.insert(x);
     }
     if(ab.size()<2 ){
        if(bc.size()>=3)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
     }
     else if(bc.size()<2){
        if(ab.size()>=3)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
     }
     else cout<<"YES"<<endl;
     
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