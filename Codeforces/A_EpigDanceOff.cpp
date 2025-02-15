#include<bits/stdc++.h>
using namespace std;

    // @author : tariq002

#define endl '\n'
#define int long long
/*------------X------------*/

signed main()
{
    ios_base::sync_with_stdio(false);

    int n,m;
    cin >> n >>m;
    vector<string>ab(n);
    for(int i=0;i<n;i++){
        string s;
        cin >> s;
        ab[i] = s;
    }
    int total=0;
    for(int col = 0;col<m;col++){
        bool found = true;
        for(int row=0;row<n;row++){
            if(ab[row][col]!='_')found = false;
        }
        if(found)total++;
    }
    cout<<total+1<<endl;

    return 0;
}