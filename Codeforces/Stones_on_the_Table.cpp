#include "bits/stdc++.h"
using namespace std;
#define int long long
#define OR ||
#define AND &&
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    string s;
    cin >> s;
    int p = 0;
    for(int i=0;i < s.size()-1; i++)
    {
        if(s[i]==s[i+1])
        {
            p++;
        }
    }
    cout<<p<<endl;
    return 0;
}