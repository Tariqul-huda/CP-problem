#include "bits/stdc++.h"
using namespace std;
#define int long long
#define OR ||
#define AND &&
 ostream&operator <<(ostream &out, const vector<int> &a)
{
    for(int i=0;i<a.size();i++)
    out<<a[i]<<" ";
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++)a.push_back(i);
        cout<<a<<endl;
    }
    return 0;
}