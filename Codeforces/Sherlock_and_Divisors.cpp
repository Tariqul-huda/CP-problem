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
const int limit = 1e9+3;

void crack()
{
    int n;
    cin >> n;
    int cc = 0;
    for(int i =2;i*i<=n;i+=2){
        if(!(n%i)){
            n/=i;
            cc++;}
            
    }
    cout<<((n%2==0)?(n/2)+cc:cc)<<endl;
}

int32_t main()
{
    faf auto st = clock();
  ;
    test
    {
        //cout << "Case " << ++tc << ": ";
        crack();
    }
    //cerr << 1.0 * (clock() - st) / CLOCKS_PER_SEC << endl;
    return 0;
}