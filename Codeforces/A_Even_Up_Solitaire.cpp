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
    stack<int>ab;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        if(ab.empty()){
            ab.push(x);
        }
        else{
            if((ab.top()+x)%2==0)ab.pop();
            else ab.push(x);
        }

    }
    cout<<ab.size()<<endl;

    return 0;
}