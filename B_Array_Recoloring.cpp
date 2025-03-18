#include<bits/stdc++.h>
#define endl '\n'
#define int long long
using namespace std;


signed main()
{
    int t;
    cin >> t;
    while(t--){
       int n,k;
       cin >> n >> k;
       vector<int> a(n),b(n);
       for(int &i:a)cin >> i;
       b = a;
       sort(a.begin(),a.end(),greater<int>());
       int cnt = 0;
       if(k==1){
        int m = INT_MIN;
        for(int i =1;i<n-1;i++){
            //forward direction
            m = max(m,b[i]+max(b[0],b[n-1]));
        }
        m = max(m,b[0]+b[n-1]);
        cout<<m<<endl;
       }
       else{

           for(int i =0;i<k+1;i++)cnt+=a[i];
           cout<<cnt<<endl;
       }

    }
    return 0;
}