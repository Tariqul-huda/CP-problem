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
    while(cin >> n and n)
    {
        bitset<31>mai,b,c;
        mai = n;
        vector<int>ab;
        ab.push_back(-1);
        for(int i=1;i<32;i++){
            if(mai[i-1]==1){
                if(i&1)b.set(i-1);
                else c.set(i-1);
            }
           
        }

        cout<<b.to_ulong()<<" "<<c.to_ulong()<<endl;;

        //cout<<mai<<endl;

    }

    return 0;
}