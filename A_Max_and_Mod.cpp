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
    if(n%2==0)cout<<-1<<endl;
    else{
        cout<<n<<" ";
        for(int i = 1;i<=n-1;i++)cout<<i<<" ";
        cout<<endl;
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
