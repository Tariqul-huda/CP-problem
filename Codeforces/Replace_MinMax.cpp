#include "bits/stdc++.h"
using namespace std;
#define int long long
#define OR ||
#define AND &&
struct Max{
    int data;
    int index;
};
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    int minn= INT_MAX;
    int maxx = INT_MIN;
    int a[T];
      Max m1,m2;
    for(int i=0;i<T;i++) {
      
      cin>>a[i];
      if(maxx<=a[i])
      {
        m1.data = a[i];
        m1.index = i;
        maxx = a[i];
      }
      if(minn>=a[i])
      {
        m2.data = a[i];
        m2.index = i;
        minn = a[i];
      }
      
    }
    swap(a[m2.index],a[m1.index]);
    for(int i=0;i<T;i++)cout<<a[i]<<" ";
    return 0;
}