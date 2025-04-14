#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define endl '\n'
const int limit = 1e4;
stack<int>balls;
unordered_map<int,int>dict;
int main() {
    fastio;
    for(int i =1;i<=limit;i++)dict[i*i]=true;
    // Your code here
    int tc;
    cin>> tc;
    while(tc--){
        for(int i =limit;i>=1;i--)balls.push(i);
        int n;
        cin >> n;
        int cnt = 0;
        vector<int>ab(n,0);
        bool found = false;
        ab[0] = balls.top();
        balls.pop();
        cnt++;
        for(int i =1;i<n;i++){
            found = false;
            if(dict[ab[i]+balls.top()] or !ab[i]){
                ab[i] = balls.top();
                balls.pop();
                cnt++;
                found = true;

                
            }else continue;
          
            i = -1;
        }
        cout<<cnt;
     if(tc)cout<<endl;
    }
    return 0;
}