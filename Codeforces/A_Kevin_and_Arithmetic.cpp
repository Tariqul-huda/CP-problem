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
     int a[n];
     for(int &i:a)cin>>i;
     int odd = 0;
     int eve = 0;
     for(int i=0;i<n;i++){
        if(a[i]&1)odd++;
        else  eve++;
     }
     if(eve){
        cout<<odd+1<<endl;
     }
     else{
        cout<<odd-1<<endl;
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