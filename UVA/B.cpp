#include<bits/stdc++.h>
using namespace std;

    // @author : tariq002

#define endl '\n'
#define int long long
/*------------X------------*/

signed main()
{
    ios_base::sync_with_stdio(false);

    int n,q;
    while(1){
        cin >> n;
        if(!n)break;
        cin >> q;
        int arr[n+1];
        set<int>ab;
        unordered_map<int,int>dict;
        int max_v = INT_MIN;
        for(int i =1;i<=n;i++){
            cin >>arr[i];
            ab.insert(arr[i]);
            dict[arr[i]]++;
            max_v  =max(max_v,arr[i]);
        }
        int pref[n+1] = {0};
        queue<pair<int,int>>query;
        while(q--){
            int a,b;
            cin >> a >> b;
            query.push({a,b});
        }
        pref[1] =arr[1];
        for(int i =2;i<=n;i++){
            
            if(dict[arr[i]]>dict[pref[i-1]]){
                pref[i] = arr[i];
            }
            else pref[i] = pref[i-1];
        }
        while(!query.empty()){
            cerr<<pref[query.front().second]<<endl;
            query.pop();
        }

 

    }


    return 0;
}