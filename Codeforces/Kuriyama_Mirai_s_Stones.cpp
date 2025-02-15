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
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b,b+n);
    int q;
    int pre_a[n],pre_b[n];
    pre_a[0]=a[0];
    pre_b[0]=b[0];
    for(int i=1;i<n;i++)
    {
        pre_a[i] = pre_a[i-1]+a[i];
        pre_b[i] = pre_b[i-1]+b[i];
    }
    cin >> q;
    while(q--)
    {
        int type, l, r;
        cin>> type >> l >> r;
        l--;r--;
        if(type==1)
        {
            if(!l)
            {
                cout<<pre_a[r]<<endl;
            }
            else
            {
                cout<<pre_a[r]-pre_a[l-1]<<endl;
            }

        }
        else
        {
             if(!l)
            {
                cout<<pre_b[r]<<endl;
            }
            else
            {
                cout<<pre_b[r]-pre_b[l-1]<<endl;
            }
        }
    }

    return 0;
}