#include "bits/stdc++.h"
using namespace std;
#define int long long
#define endl '\n'
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    set<long long>ab;
    while (T--) {
        long long x,y;
        cin >> x >> y;
        if(x==1){
            ab.insert(y);
        }
        else if(x==2)ab.erase(y);
        else{
            set<long long>::iterator i = ab.find(y);
            if(i==ab.end())cout<<"No"<<endl;
            else cout<<"Yes"<<endl;
        }

    }
    return 0;
}