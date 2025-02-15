#include "bits/stdc++.h"
using namespace std;
#define int long long
#define OR ||
#define AND &&
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    while(1)
    {
        int a,b,c;
        cin >> a >> b >> c;
        if(a==0 && b == 0 && c ==0)break;
        int d1 = b-a;
        int d2 = c-b;
        if(d2!=d1)  //GP
        {
            cout<<"GP"<<" "<<c*(b/a)<<endl;
        }
        else
        {
            cout<<"AP "<<c+d1<<endl;
        }

    }
    return 0;
}