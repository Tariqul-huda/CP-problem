#include "bits/stdc++.h"
using namespace std;
#define int long long
#define endl '\n'

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    string result = "";
    for(int i=0;i<s.size()-3;i++)
    {
        if(!(s[i]=='W' && s[i+1] == 'U' && s[i+2]=='B'))
        {
        result.push_back(' ');
        result.push_back(s[i]);

        }
        else
            i+=3;
        
    }
    cout<<result<<endl;
    return 0;
}