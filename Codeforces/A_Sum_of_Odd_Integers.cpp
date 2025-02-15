#include "bits/stdc++.h"
using namespace std;
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
#define int long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define debugg cout<<"debug"<<endl
#define OR ||
#define AND &&
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int n,k;
        cin>>n>>k;
        if(n%2)
        {
            if(k%2)
            yes;
            else
            no;
           // debugg;
        }
        else
        {
            if(k%2==0)
            yes;
            else
            no;
        }
    }
    return 0;
}