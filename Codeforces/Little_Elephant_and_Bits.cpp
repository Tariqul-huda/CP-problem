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
    size_t z_position = s.find('0');
    if(s.find('0') != string::npos)
    {
        s.erase(z_position,1);
    }
    else
    {
        s.pop_back();
    
    }
    cout<<s<<endl;
    


    return 0;
}