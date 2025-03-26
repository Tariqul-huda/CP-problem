#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    int arr[n+1];
    for(int i =1;i<n+1;i++)cin>>arr[i];
    int pref_sum[n+1]{};
    while(q--){
        int l,m;
        cin >> l >> m;
        pref_sum[l]++;
        pref_sum[m]++;
    }
 
    sort(pref_sum,pref_sum+n+1);
    sort(arr,arr+n+1);
    int sum = 0;
    for(int i =1;i<=n;i++){
        cerr<<pref_sum[i]<< " ";

        sum+=pref_sum[i]*arr[i];
    }
    cerr<<sum<<endl;
    return 0;
}