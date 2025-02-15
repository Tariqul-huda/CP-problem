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
        vector<int>b,c;
        for(int i=0;i<n;i++)
        cin>>a[i];
        int min_value = a[min_element(a,a+n)-a];
        for(int i=0;i<n;i++)
        {
            if(a[i]==min_value)
            b.push_back(a[i]);
            else
            c.push_back(a[i]);
        }
        if(c.size()==0)
        cout<<-1<<endl;
        else
        {
            cout<<b.size()<<" "<<c.size()<<endl;
            for(auto v:b)
            cout<<v<<" ";
            cout<<endl;
            for(auto v:c)
            cout<<v<<" ";
            cout<<endl;

        }



    }
    return 0;
}