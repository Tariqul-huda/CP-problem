#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define sz(v) (int)v.size()

const int MOD = 1e9 + 7;
const int INF = 1e9;


int main() {
    fastio;
    int n;
    while(cin>>n){
        vector<int>start_grid(n,0),end_grid(n,0);
        
        for(int &i:start_grid)cin>>i;
        for(int &i:end_grid)cin>>i;

        int min_step = 0;
        for(int i =n-1;i>=0;i--){
            for(int j =i;j>=0;j--){
                if(start_grid[i]==end_grid[j]){
                    if(!j)min_step +=(i);
                    else
                    min_step +=abs(i-j);
                    // cerr<<i <<" " <<j <<" "<<min_step<<endl;
                    // min_step++;
                    break;
                }
            }
        }
        cout<<min_step<<endl;

    }
    return 0;
}