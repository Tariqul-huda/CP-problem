#include<bits/stdc++.h>
#define endl '\n'
#define int long long
using namespace std;
struct Q{
    int l,r,d;
};
signed main()
{
    int n,m,k;
    cin >> n >> m >> k;
    int arr[n+1]{0};
    
    vector<int>pref_arr(n+2,0);
    for(int i =1;i<n+1;i++)cin>>arr[i];
    vector<Q>query;
    query.push_back({0,0,0});
    vector<vector<int>>ans_pref;
    ans_pref.push_back(pref_arr);
    while(m--){
        int l,r,d;
        cin >> l >> r >> d;
        ans_pref.push_back(pref_arr);
        ans_pref.back()[l]+=d;
        ans_pref.back()[r]-=d;
        query.push_back({l,r,d});
    }
    while(k--){
        int l,r;
        cin >> l >> r;
        while(l<=r){
            pref_arr[query[l].l]+=query[l].d;
            pref_arr[query[l].r+1]-=query[l].d;
            l++;
        }
    }
    for(int i =1;i<n+2;i++){
        pref_arr[i] += pref_arr[i-1];
    }
    for(int i =1;i<n+1;i++){
        arr[i]+=pref_arr[i];
    }
    for(int i =1;i<n+1;i++)cout<<arr[i]<<" ";
    return 0;
}