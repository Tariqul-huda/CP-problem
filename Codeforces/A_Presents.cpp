#include "bits/stdc++.h"
using namespace std;
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
#define mod 1e9 + 7
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++)
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--)
#define INF 1000000000000000003
#define int long long
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define POB pop_back
#define MP make_pair
void process(int *old_arr, int n)
{
    int new_array[n+1];
    for(int i=1;i<=n;i++)
    {    
        new_array[old_arr[i]]= i;

    }   
    for(int i=1;i<=n;i++)
    cout<<new_array[i]<<" ";
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int old_arr[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>old_arr[i];
    }
    process(old_arr,n);

    return 0;
}