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
    int x;
    cin >> x;
    int even_c = 0;
    int odd_c = 0;
    for(int i=1;i<=x;i++){
        if(x%i==0){
            if(i&1){
                odd_c++;
            }
            else even_c++;
        }
    } 
    if(even_c>odd_c)cout<<1<<endl;
    else if(even_c==odd_c)cout<<0<<endl;
    else cout<<-1<<endl;
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