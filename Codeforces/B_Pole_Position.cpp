#include<bits/stdc++.h>
using namespace std;

    // @author : tariq002

#define endl '\n'
#define int long long
/*------------X------------*/
const int N = 1e5+7;

signed main()
{
    ios_base::sync_with_stdio(false);

    int n;
    while(cin>>n and n){
        int a[N]={0};
        bool is_found = false;
        for(int i=0;i<n;i++){
        int c,p;
        cin >> c >> p;
        if(i+p<0 or i+p>=n or a[i+p]){
            is_found = true;
            if(is_found)continue;
            
        }
        if(!is_found && a[i+p])is_found = true;
        if(is_found)continue;
            
            a[i+p]=c;

        }
        if(is_found)cout<<-1;
        else{
            for(int i=0;i<n-1;i++)cout<<a[i]<<" ";
            cout<<a[n-1];
        }
        cout<<endl;
        
    }

    return 0;
}