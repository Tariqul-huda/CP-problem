#include "bits/stdc++.h"
using namespace std;
#define int long long
#define OR ||
#define AND &&
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int a,b,l;
        cin>>a>>b>>l;
        int cnt = 0;
        for(int k=1;k<=100;k++)
        {
            for(int x  = 0;x<=100;x++)
            {
                for(int y = 0;y<=100;y++)
                {
                    if(log(k)==(log(l)-x*log(a)-y*log(b)))cnt++;
                }
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}