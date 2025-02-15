#include "bits/stdc++.h"
using namespace std;
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
#define mod 1e9 + 7
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++)
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--)
#define INF 1000000000000000003
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define POB pop_back
#define MP make_pair

long long fib(int n,vector<long long>*a)
{
    long long fib1= 0,fib2=1;
    
    if(n<=1)
    return 0;
    else
    {
        for(int i=2;i<=n;i++)
        {
            long long  fib3 = fib1+fib2;
            fib1 = fib2;
            fib2= fib3; 
        }

    }
    return fib2;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    vector<long long>a;
    fib(50,&a);


    return 0;
}