#include<bits/stdc++.h>
#include<bits/extc++.h>
using namespace __gnu_pbds;
using namespace std;

    // @author : tariq002

#define endl '\n'
#define int long long
/*------------X------------*/
typedef tree<pair<int,int>,null_type,less<pair<int,int>>,rb_tree_tag,tree_order_statistics_node_update> oset;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while(t--){
    int sum=0;
    int n;
    cin >> n;
    oset nums;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        nums.insert({x,i});
        if(i&1){
            int temp=((nums.find_by_order((i+1)/2))->first+(nums.find_by_order(((i+1)/2)-1))->first);
            // cout<<i<<endl;
            sum+=(temp/2);
        }
        else{
            sum+=((nums.find_by_order((i+1)/2))->first);
        }
    }
    cout<<sum<<endl;
        
    }

    

    return 0;
}