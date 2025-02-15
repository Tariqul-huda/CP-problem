#include<bits/stdc++.h>
#include<bits/extc++.h>
using namespace __gnu_pbds;
using namespace std;

    // @author : tariq002

#define endl '\n'

/*------------X------------*/
typedef tree<string,null_type,less<string>,rb_tree_tag,tree_order_statistics_node_update> ostree;

ostree male,female;
signed main()
{
    ios_base::sync_with_stdio(false);
    int n;
    while(cin >> n){
        string s;
        int t;
        if(n==1){
        cin >> s >> t;
        if(t==1)male.insert(s);
        else female.insert(s);
        }
        else if(n==2){
            cin >> s;
            if(male.find(s)!=male.end())male.erase(s);
            else female.erase(s);
        }
        else if(n==3){
            string a,b;
            int k;
            cin >> a >> b >> k;
            int ml = male.order_of_key(a);
            int mr = male.order_of_key(b);
            int fl = female.order_of_key(a);
            int fr = female.order_of_key(b);
            int s1 = max(0,mr-ml);
            int s2 = max(0,fr-fl);
            if(k==1){
                cout<<s1<<endl;
                
            }
            else if(k==2)cout<<s2<<endl;
            else cout<<s1+s2<<endl;
        }
    }

    

    return 0;
}