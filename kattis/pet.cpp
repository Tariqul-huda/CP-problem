#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define sz(v) (int)v.size()

const int MOD = 1e9 + 7;
const ll INF = 1e18;



int main() {
    fastio;
    unordered_map<int,int>mp;
    for(int i =1;i<=5;i++){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        mp[i]+=(a+b+c+d);
    }
    int mx  = -1;
    int p,d;
    for(auto i:mp){
        if(i.second>mx){
            p = i.first;
            d = i.second;
            mx = i.second;
        }
    }
    cout<<p<<" "<<d<<endl;
    return 0;
}