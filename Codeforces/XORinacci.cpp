#include "bits/stdc++.h"
using namespace std;
#define endl '\n'
int a , b , n;
map<int,int> xer;
int fib(int n)
{
    if(n==0)return a;
    if(n==1)return b;
    if(!xer[n])
    {
        xer[n] = fib(n-1) ^ fib(n-2);
    return xer[n];
    }
    else return xer[n];
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
      cin >> a >> b >> n;
     cout<<fib(n)<<endl;
    xer.clear();
    }
    return 0;
}