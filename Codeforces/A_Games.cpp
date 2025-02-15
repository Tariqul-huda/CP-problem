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


        vector<int> a, b;
        int n;
        cin >> n;
        int cnt = 0;
        int temp = n;
        while (temp--)
        {
            int x, y;
            cin >> x >> y;
            a.push_back(x);
            b.push_back(y);
        }
        // for(auto i:a)
        // cout<<i<<" ";
        // cout<<endl;
        // for(auto i:b)
        // cout<<i<<" ";
        // cout<<endl;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (a[i] == b[j])
                    cnt++;
                //cout<<a[i]<<" "<<b[j]<<endl;
            }
            
        }
    cout<<cnt<<endl;
    
    return 0;
}