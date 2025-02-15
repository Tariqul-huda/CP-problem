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
        int a[n];
        vector<int>b;
        for(int i=0;i<n;i++)
        cin>>a[i];
        for(int i=0;i<n-1 ;i++)
        {
            if(a[i]>a[i+1])
            {
                b.push_back(a[i]);
                b.push_back(1);
                
            }
            else
            b.push_back(a[i]);

        }
        b.push_back(a[n-1]);
        cout<<b.size()<<endl;
        for(auto v:b)
        cout<<v<<" ";
        cout<<endl;
    }
    return 0;
}