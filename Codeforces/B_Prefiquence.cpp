#include "bits/stdc++.h"
using namespace std;
#define int long long
#define OR ||
#define AND &&
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
      int n,x;
      cin>>n>>x;
      string s,m;
      cin>>s>>m;
    //   int c1 = count(m.begin(),m.end(),'1');
    //   int c0 = count(m.begin(),m.end(),'0');
    //   int k = 0;
    //   //cout<<c1<<" "<<c0<<endl;
    //   for(int i=0;i<s.size();i++)
    //   {
    //     if(s[i]=='0')
    //     {
    //        // cout<<m[i]<<endl;
    //         if(c0==0)
    //         break;
    //         k++;c0--;
    //     }
    //     else
    //     {
    //         if(c1==0)break;k++;c1--;
    //        // cout<<m[i]<<endl;
    //     }
    //    // cout<<c1<<c0<<endl;
    //   }
    int k=0;
    string ss= "";
    int pos  = 0;
    for(int i=0;i<s.size();i++)
    {
        for(;pos<m.size();pos++)
        {
            if(s[i]==m[pos]){
                k++;
                //cout<<m[pos]<<endl;
               // cout<<pos<<endl;
               pos++;
                break;}
        }
        if(pos==m.size())break;
    }
      cout<<k<<endl;

    }
    return 0;
}