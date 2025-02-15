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
        int n;
        cin>>n;
        int a[n];
        int cmp = LLONG_MAX;
        int cnt = 0;
        pair<int,int>coord;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            a[i]=x;
        

        }
        for(int i=0;i<n-1;i++)
        {
            if(a[i+1]-a[i]<cmp)
            {
                cmp = a[i+1]-a[i];
                coord.first = i;
                coord.second = i+1;
            }
        }
        // while(a[coord.first]<=a[coord.second])
        // {
        //     a[coord.first]++;
        //     a[coord.second]--;
        //     cnt++;
        // }

        cnt = ((a[coord.second]-a[coord.first])/2)*(cmp>=0)+(cmp>=0);
        cout<<cnt<<endl;
        //cout<<cmp<<endl;
    }
    // int first = 600;
    // int second = 1000;
    // int cnt =0;
    // while(first<=second)
    // {
    //     first ++;
    //     second--;cnt++;

    // }
    // cout<<cnt<<endl;
    return 0;
}