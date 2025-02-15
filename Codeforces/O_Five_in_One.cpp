#include "bits/stdc++.h"
using namespace std;
#define int long long
#define OR ||
#define AND &&
int prime(int *a,int n)
{
    int p = 0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==2)p++;
        else if(a[i]&1 && a[i]!=2)
        {
            int j;
            for(j = 2;j<a[i];j++)
            if(!(a[i]%j))break;
            if(j==a[i])p++;
        }
    }
    return p;
}
int palindrome(int *a,int n)
{
    int pal = 0;
    for(int i=0;i<n;i++)
    {
        if(a[i]<10)pal++;
        else if(!(a[i]%11))pal++;
    }
    return pal;
}
int max_div(int *a,int n)
{
    int max_d_i = -1;
    int max_index=0;
    for(int i=0;i<n;i++)
    {
        int max_d = -1;
        for(int j=1;j<=a[i];j++)
        if(!(a[i]%j))max_d++;
        if(max_d>=max_d_i)
        {
            max_d_i = max_d;
            max_index = i;
        }
    }
    return a[max_index];
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int a[n];
    for(int i  = 0;i < n;i++)
    {
        cin >> a[i];
    }
    sort(a,a+n);
    cout<<"The maximum number : "<<a[n-1]<<endl;
    cout<<"The minimum number : "<<a[0]<<endl;
    cout<<"The number of prime numbers : "<<prime(a,n)<<endl;
    cout<<"The number of palindrome numbers : "<<palindrome(a,n)<<endl;
    cout<<"The number that has the maximum number of divisors : "<<max_div(a,n)<<endl;
    return 0;
}