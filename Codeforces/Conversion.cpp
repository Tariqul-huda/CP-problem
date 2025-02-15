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
    for(int i=0;i<s.size();i++)
    {
        if(isupper(s[i]))
        s[i] = tolower(s[i]);
        else if(islower(s[i])) s[i] = toupper(s[i]);
        else if(s[i]==',')s[i] = 32;
    }
    cout<<s<<endl;
    return 0;
}