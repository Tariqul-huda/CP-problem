#include<bits/stdc++.h>
using namespace std;

    // @author : tariq002

#define endl '\n'
#define int long long
/*------------X------------*/

signed main()
{
    ios_base::sync_with_stdio(false);

    int b,g,k;
    cin >> b >> g >> k;
    int knight_needed = g/k;
    
    if(b%knight_needed==0){
        cout<<b/knight_needed<<endl;
    }
    else{
        cout<<b/knight_needed+1<<endl;
    }

    return 0;
}