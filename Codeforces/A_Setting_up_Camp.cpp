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
      int intro , outro , uni;
      cin >> intro >> outro >> uni;
      int two_sum = uni+outro;
      int remainder = two_sum %3;
      int result = two_sum /3;
      if(uni-remainder<0)cout<<-1<<endl;
      else
      {
        uni = uni-((result*3)-outro);
        result += (uni/3);
        uni %= 3;
        result += (uni/2);
        uni %= 2;
        result += (intro + uni);
      cout<<result<<endl;
      }
    }
    return 0;
}
