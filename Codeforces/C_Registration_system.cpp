#include<bits/stdc++.h>
using namespace std;

    // @author : tariq002

#define endl '\n'
#define int long long
/*------------X------------*/

signed main()
{
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;
    unordered_map<string,int>mp;
    while(n--){
        string s;
        cin >> s;
        if(mp[s]==0){
            mp[s]++;
            cout<<"OK"<<endl;
        }
        else{
            cout<<s<<mp[s]<<endl;
            mp[s]++;

        }
    }

    return 0;
}