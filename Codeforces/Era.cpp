#include "bits/stdc++.h"
using namespace std;
#define int long long
#define OR ||
#define AND &&
struct Value{

    int data,pos;
};
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
      int n;
      cin>>n;
      Value a[n];
      for(int i=0;i<n;i++)
      {
        int x;
        cin>>x;
        a[i].data = x;
        a[i].pos = i+1;
      }
      int mov = 0;
      for(int i=0;i<n;i++)
      {
        if(a[i].data>a[i].pos)
        {
            mov+=abs(a[i].data-a[i].pos);
            int plus = abs(a[i].data-a[i].pos);
            //cout<<a[i].data<<" "<<a[i].pos<<endl;
            for(int j=i;j<n;j++)
            {
                a[j].pos +=plus;
                //cout<<abs(a[j].data-a[j].pos)<<endl;
            }
        }
      }
      cout<<mov<<endl;


    }
    return 0;
}