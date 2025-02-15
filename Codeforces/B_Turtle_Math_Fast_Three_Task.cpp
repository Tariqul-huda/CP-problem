#include "bits/stdc++.h"
using namespace std;
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
        // int n;
        // cin>>n;
        // int a[n];
        // for(int i=0;i<n;i++)cin>>a[i];
        // for(int i=0;i<n;i++)a[i]%=3;
        // map<int,int>mp;
        // for(int i=0;i<n;i++)mp[a[i]]++;
        // for(auto i:mp)cout<<i.first<<" "<<i.second<<endl;

        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        int sum =0;
        for(int i=0;i<n;i++)sum+=a[i];
        if(!(sum%3))
        {
            cout<<0<<endl;
        }
        else
        {
            //insert logic
            int insert_op = ceil(sum/3.00)*3-sum;

         //remmove logic
         int min_rem = INT_MAX;

            for(int i=0;i<n;i++)
            {
                if((sum-a[i])%3==0)
                {
                    min_rem = 1;
                }
            }
            cout<<min(insert_op,min_rem)<<endl;
        }
        
    }
    return 0;
}