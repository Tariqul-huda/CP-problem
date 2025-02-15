#include<bits/stdc++.h>
using namespace std;

    // @author : tariq002

#define endl '\n'
#define int long long
/*------------X------------*/

signed main()
{
    ios_base::sync_with_stdio(false);
    int alice_size,betty_size;
    while(cin >> alice_size >> betty_size and (alice_size and betty_size)){
        set<int>alice,betty;
        for(int i=0;i<alice_size;i++){
            int x;
            cin >> x;
            alice.insert(x);
        }
        for(int i=0;i<betty_size;i++){
            int x;
            cin >> x;
            betty.insert(x);
        }
        int cc =0;
        if(alice.size()<betty.size()){
            auto it = alice.begin();
            while(it!=alice.end()){
                if(betty.find(*it)!=betty.end()){
                    cc++;
                }
                it++;
            }
            cout<<alice.size()-cc<<endl;
        }
        else{
            auto it = betty.begin();
            while(it!=betty.end()){
                if(alice.find(*it)!=alice.end()){
                    cc++;
                }
                it++;
            }
            cout<<betty.size()-cc<<endl;
        }

    }

    

    return 0;
}