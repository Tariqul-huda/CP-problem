#include <bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define int long long
 
int n;
int f(int m) {
    
    vector<int> regions(n);
    iota(regions.begin(), regions.end(), 1); 
    regions.erase(regions.begin());

    int idx = 0;
    while (regions.size()>1) {

        idx = (idx + m - 1) % regions.size();
        regions.erase(regions.begin() + idx);
    }
    return regions.back();
}
 
signed main(){
    ios_base::sync_with_stdio(false);
    while(cin >> n and n){
        
        for(int i =1;i<=1e9;i++){
            
            if(f(i)==13){
                cout<<i<<endl;
                break;
            }

        }
    }
    return 0;
}
