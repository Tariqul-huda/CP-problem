#include "bits/stdc++.h"
using namespace std;
#define int long long
#define OR ||
#define AND &&
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int k,s;
    int sum = 0;
    cin>>k>>s;
    for(int i=0;i<=s;i++)
    {
        for(int j = 0;j<=s;j++)
        {
            for(int l = 0;l<=s;l++)
            {
                if(i+j+l == s)sum++;
            }
        }
    }
    cout<<sum<<endl;
    return 0;
}