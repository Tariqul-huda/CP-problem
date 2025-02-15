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
    vector<int>a;
    int prev;
    int cc =1;
    cin >> prev;

    a.push_back(prev);
    for(int i=1;i<n;i++){
        
        int x;
        cin >> x;
        if(prev<x){
            prev = x;
            a.push_back(x);
            
        }
    }
    cout<<a.size()<<endl;
    for(int i:a)cout<<i<<" ";

    return 0;
}