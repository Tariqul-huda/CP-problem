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
      int n , m;
      cin >> n >>m;
      string original;
      cin >> original;
      string temp;
      int a[m];
      
      for(int i=0;i<m;i++)
      {
        cin >> a[i];
      }
     // cout<<a<<endl;
      string second;
      cin >> second;
      sort(second.begin(),second.end());
      //sort(a,a+m);
      string small = original;
      set<string>ab;
      do
      {
        /* code */
        // for(int i=0;i<m;i++)cout<<a[i]<<" ";
        // cout<<endl;
            temp = original;

            for(int i =0;i<m;i++)
            {
                temp[a[i]-1] = second[i];
               // cout<<second<<endl;
            }
            
            ab.insert(temp);
        
      } while (next_permutation(second.begin(), second.end()));
      cout<<*ab.begin()<<endl;
    }
    return 0;
}