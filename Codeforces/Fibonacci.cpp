#include "bits/stdc++.h"
using namespace std;
#define int long long
#define OR ||
#define AND &&
int a[1000]{0};

int fib(int n)
{
    if(a[n] || n==1) return a[n];
    
    return a[n]= fib(n-1)+fib(n-2);
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;cin>>n;
    a[1]=0; a[2] =1; 
   // for(int i=0;i<100;i++)cout<<a[i]<<endl;
    cout<<fib(n)<<endl;
    return 0;
}