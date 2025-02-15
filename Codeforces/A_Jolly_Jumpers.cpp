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
    while(cin >> n){
        int x = 0;
        int sum = 0;
        for(int i=1;i<=n-1;i++)sum^=i;
        int a[n];
        map<int,bool>ab;
        for(int &i:a)cin>>i;
        for(int i=0;i<n-1;i++)ab[(abs(a[i]-a[i+1]))]=true;
        bool not_found = false;
        for(int i=1;i<=n-1;i++){
            if(!ab[i]){
                not_found = true;
                break;
            }
        }
        if(not_found)cout<<"Not jolly"<<endl;
        else cout<<"Jolly"<<endl;

    }

    return 0;
}