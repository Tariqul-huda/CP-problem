#include "bits/stdc++.h"
using namespace std;
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
#define int long long
#define OR ||
#define AND &&
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin>>n;
        vector<int>a;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            a.push_back(x);
        }
        int first = find(a.begin(),a.end(),1) - a.begin();
        int second = a.rend()-find(a.rbegin(),a.rend(),1)-1;
        int zero_c = 0;
        
        for(int i=first;i<=second;i++)
        {
            if(a[i]==0)
            {
                //cout<<"HELO"<<endl;
            zero_c++;
            }
            //cout<<a[first]<<endl;
        }
        cout<<zero_c<<endl;

    }
    return 0;
}