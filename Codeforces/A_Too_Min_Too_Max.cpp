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
        for(int i=0;i<n;i++)
        cin>>a[i];
        sort(a,a+n);
        int first_min = a[0];
        int second_min = a[1];
        int first_max = a[n-1];
        int second_max = a[n-2];
        int result = abs(first_min-first_max)+abs(first_max-second_min)+abs(second_min-second_max)+abs(second_max-first_min);
        cout<<result<<endl;

    }
    return 0;
}