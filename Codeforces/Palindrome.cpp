#include "bits/stdc++.h"
using namespace std;
#define int long long
#define OR ||
#define AND &&
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin>>s;
    bool found = false;
    for(int i=0,j=s.size()-1;i<s.size()/2;i++,j--)
    {
        if(s[i]!=s[j])
        {
            cout<<"NO"<<endl;
            found  = true;
            break;
        }
    }
    if(!found)cout<<"YES"<<endl;
    return 0;
}