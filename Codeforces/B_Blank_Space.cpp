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
        for(int i=0;i<n;i++)cin>>a[i];
        int zero_c = 0;
        for(int i=0;i<n;i++)
        {
            int temp =0;
            if(a[i]==0)
            {
                int j;
                for(j=i;a[j]!=1 && j<n;j++)
                {
                    temp++;
                    //cout<<temp<<endl;
                }
                i = j;
            }
            if(temp>zero_c)
            zero_c = temp;
        }
        cout<<zero_c<<endl;
    }
    return 0;
}