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
    int sum = 0;
    for(int i=0;i<s.size();i++)sum+=(s[i]-'0');
    cout<<sum<<endl;
    return 0;
}