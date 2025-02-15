#include "bits/stdc++.h"
using namespace std;
#define int long long
#define endl '\n'
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
      int n;
      cin >> n;
      int a[n];
      sort(a,a+n);
      long double initial_avg = 0;
      for(int i= 0;i<n;i++){
        cin >> a[i];
        initial_avg+=a[i];
      }
      initial_avg/=n;
      
      //for unhappy count
      int unhappy_count = 0;
      int last_unhappy = 0;
      bool found_last =true;
      for(int i=0;i<n;i++){
        if(a[i]*2<initial_avg)unhappy_count++;
        if(a[i]*2>initial_avg and found_last){
          last_unhappy=i-1;
          found_last = false;
        }
      }
      int target_unhappy = ((n-1)/2)+1;
      target_unhappy = abs(unhappy_count-target_unhappy);
      last_unhappy +=target_unhappy;
      long double diff = abs(a[last_unhappy]*2-initial_avg)+initial_avg+0.1;
      int result = diff*n;
      cout<<result<<endl;

    }
    return 0;
}