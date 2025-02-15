#include<bits/stdc++.h>
using namespace std;

    // @author : tariq002

#define endl '\n'
#define int long long
/*------------X------------*/

signed main()
{
    ios_base::sync_with_stdio(false);

    int n; cin >> n;
    vector<int> a(n);
    int mex = 2;
    int maax = INT_MIN;
    for(int i=0; i<n; i++){
        cin >> a[i];
        maax = max(maax, a[i]);
       
      
    } 
    // sort(a.begin(), a.end());
    // for(int i=0; i<n; i++){
    //  cout<<a[i]<<endl;
    // }
    set<int>b;
    int ans=(a[0]==1)?2:a[0]-1;
    b.insert(ans);
    for(int i=1;i<n;i++){
        if(a[i]<=mex){
            int l = 2,r = maax+1;
            // cerr<<a[i]<<endl;
            while(l<=r){
                int mid = (l+r)/2;
                if(!(find(a.begin(), a.begin()+i+1, mid)!=a.end())){
                    ans = mid;
                  r = mid-1;  
                } 
                else l = mid+1;
            }
            
            mex = l;
        }
            // cout<<ans<<endl;
            b.insert(ans);
        
    }
     ans=(a[n-1]==1)?2:a[n-1]-1;
    b.insert(ans);
        for(int i=n-2;i>=0;i--){
        if(a[i]<=mex){
            int l = 2,r = maax+1;
            // cerr<<a[i]<<endl;
            while(l<=r){
                int mid = (l+r)/2;
                if(!(find(a.begin()+i, a.end(), mid)!=a.end())){
                    ans = mid;
                  r = mid-1;  
                } 
                else l = mid+1;
            }
            mex = l;
        }
           
            b.insert(ans);
        
    }
    // for(auto i:b)cout<<i<<" ";
      int l = 2,r = (*b.end())+1 ;
            // cerr<<a[i]<<endl;
            while(l<=r){
                int mid = (l+r)/2;
                if(!(b.find(mid)!=b.end())){
                    ans = mid;
                  r = mid-1;  
                } 
                else l = mid+1;
            }
            
            cout<<ans<<endl;
   

    return 0;
}