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
     int m,a,b,c;
     cin >> m >> a >> b >> c;
     int first_row=m , second_row = m;
     int remaining =0;
     first_row -=a;
     second_row -=b;
     remaining = ((first_row<0)?0:first_row) + ((second_row<0)?0:second_row);
    
    int output = min(m,a)+min(m,b)+min(remaining,c);
    cout<<output<<endl;

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