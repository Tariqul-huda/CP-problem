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
        int n;
        cin>>n;
        int cnt = 0;
        while(n)
        {
            if(n/15)
            {
                cnt+=(n/15);
                n%=15;
            }
             else if(n/10)
            {
                cnt+=(n/10);
                n%=10;
            }
             else if(n/6)
            {
                cnt+=(n/6);
                n%=6;
            }
             else if(n/3)
            {
                cnt+=(n/3);
                n%=3;
            }
            else
            {
                cnt=cnt+n/1;
                n=n%1;

                //cout<<cnt<<endl;
            }

        }
        cout<<cnt<<endl;
    }
    return 0;
}