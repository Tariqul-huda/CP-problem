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
      int a, b;
      cin >> a >>b;
      int even_count = a/2;
      int odd_count = a-even_count;
      int even_count_b = b/2;
      int odd_count_b = b - even_count_b;
      cout<<(even_count*even_count_b+ odd_count*odd_count_b)<<endl;


    }
    return 0;
}