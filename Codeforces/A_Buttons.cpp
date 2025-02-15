#include "bits/stdc++.h"
using namespace std;
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
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
        int a,b,c;
        cin>>a>>b>>c;
        int kattie,anna;
        kattie =(c/2)+b;
        anna = (c-c/2)+a;
        if(anna>kattie)
        cout<<"First"<<endl;
        else
        cout<<"Second"<<endl;
    }
    return 0;
}