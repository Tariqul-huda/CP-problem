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
    bool is = false;
    for(char i = 'a';i<='z';i++)
    {
        if(s.find(i) == string::npos)
        {
            cout<<i<<endl;
            is = true;
            break;
        }
    }
    if(!is)
    cout<<"None"<<endl;

    return 0;
}