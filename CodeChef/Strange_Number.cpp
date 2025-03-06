#include <bits/stdc++.h>
using namespace std;
#define int long long
const int limit = 1e9;
bool prime[limit+2];
vector<int>ab;
void sieve(){
    prime[0]= prime[1] = true;
    ab.push_back(1);
    for(int i =2;i*i<=limit;i++){
        if(!prime[i]){
            ab.push_back(i*ab[ab.size()-1]);
            for(int j =i*i;j*j<=limit;j+=i){
                prime[j] = true;
            }
        }
    }
}
signed main() {
	// your code goes here
	sieve();

    int t;
    cin >> t;
    while(t--){
        int x,k;
        cin >> x >> k;
        if(k>x)cout<<0<<endl;
        else{
            cout<<1<<endl;
        }

    }

}
