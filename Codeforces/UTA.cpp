#include "bits/stdc++.h"
using namespace std;
#define int long long
#define endl '\n'
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    map<int,int>a;
    vector<int>b(n);
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        a[x]=i;
        b[i] = x;
    }

        bool shit = false;
        bool is_sort = true;
        for(int i=0;i<n-1;i++)
        {
            if(b[i]<b[i+1])
            {
                is_sort = false;
                break;
            }
        }
        if(is_sort)
        {
            cout<<0<<endl;
        }
        else
        {
        //sort(b.begin(),b.end());
        set<int>af;
        for(int i=0;i<n;i++)
        {
            for(int j = i+1;j<n-1;j++)
            {
            if(b[j]<b[j+1])
            {
                af.insert(b[j+1]-b[j]);
                cout<<b[j]<<" "<<b[j+1]<<endl;
                
            }

            }
    }
    for(auto i:af)cout<<i<<endl;
       // cout<<*af.end()<<endl;
        }

    return 0;
}
