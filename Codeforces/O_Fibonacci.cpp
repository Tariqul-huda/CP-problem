#include "bits/stdc++.h"
using namespace std;
#define int long long
#define OR ||
#define AND &&
int fib(int n)
{
    if(n==1)return 1;
    if(n&1)return 1+fib(3*n+1);
    else return 1+fib(n/2);

}
int fact(int n)
{
    if(n==1) return 1;
    return fact(n-1)*n;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    vector<int>b;
    b = a;
    reverse(b.begin(),b.end());
    if(b==a)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    cout<<fact(20)<<endl;
    return 0;
}