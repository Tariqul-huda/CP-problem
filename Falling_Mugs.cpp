#include<bits/stdc++.h>
using namespace std;

    // @author : tariq002

#define endl '\n'
#define int long long
/*------------X------------*/

signed main()
{
    ios_base::sync_with_stdio(false);

    int d;
    cin >> d;
    int sqr = static_cast<long long>(d);
    if(sqr*sqr==d){
        cout<<0<<" "<<sqr<<endl;
        return 0;
    }
    
    
    for(int i =0;i<=sqr;i++){
        for(int j = d;j>i;j--){
            if(j*j-i*i==d){
                cout<< i<< " "<<j<<endl;  
                return 0;
            }
        }
    }
    cout<<"impossible"<<endl;

    return 0;
}