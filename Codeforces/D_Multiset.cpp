#include<bits/stdc++.h>
#include<bits/extc++.h>
using namespace __gnu_pbds;
using namespace std;

    // @author : tariq002

#define endl '\n'

/*------------X------------*/
typedef tree<int,int,less<int>,rb_tree_tag,tree_order_statistics_node_update> oset;
oset nums;
void print(){
    cout<<endl;
    for(auto it = nums.begin();it!=nums.end();it++){
        cout<<it->first<<" ";
    }
    cout<<endl;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    
    int n,q;
    cin >> n >> q;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        nums.insert({x,i});
    }

    int i= n;
    while(q--){
        int x;
        cin >> x;
        
        if(x<0)
        nums.erase(nums.find_by_order(llabs(x)-1));
        else
        nums.insert({x,i++});
       
    }
    if(nums.size()){
        cout<<nums.find_by_order(0)->first<<endl;
    }
    else{
        cout<<0<<endl;
    }



    

    return 0;
}