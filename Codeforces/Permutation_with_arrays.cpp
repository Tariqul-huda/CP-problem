#include "bits/stdc++.h"
using namespace std;
#define int long long
#define OR ||
#define AND &&
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin>>n;
    map<int,int>mp1,mp2;
    int a[n];
    for(int i=0;i<n;i++) {
        int x;
        cin>>x;
        a[i]=x;
        mp1[x]++;
    }
    bool is  = false;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        mp1[x]--;
    }
    for(int i=0;i<n;i++)
    {
        if(mp1[a[i]])
        {cout << "no"<<endl; is = true;break;}
    }
    if(!is)cout<<"yes"<<endl;

    return 0;
}