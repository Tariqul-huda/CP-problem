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
    int a[n];
    for(int i=0;i<n;i++)cin >> a[i];
    int right;
    right = n-1;
    int count = 0;
    for(int left=n-2;left>=0;left--)
    {
        if(a[left]<a[right])
        count++;
        right--;
    }
    if(count == n-1)cout<<0<<endl;
    else cout<<count<<endl;
    return 0;
}