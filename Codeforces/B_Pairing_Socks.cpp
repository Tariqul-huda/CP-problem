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
    int a[n*2];
    stack<int>ab;
    int cc = 0;
    for(int i=0;i<n*2;i++){
        cin >> a[i];
        if(ab.empty()){
            ab.push(a[i]);
            cc++;
        }
        else{
            if(ab.top()==a[i])ab.pop();
            else ab.push(a[i]);
            cc++;
        }
    }
    if(ab.size()){
        cout<<"impossible"<<endl;
    }
    else{
        cout<<cc<<endl;
    }

    return 0;
}