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
#define N 10000000

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    bitset<N>bit;
    bit.flip();
    bit[0]=bit[1]=0;
    for(int i=2;i<N;i++)
    {
        if(bit[i])
        {
            for(int j=i*2;j<N;j+=i)
            {
                bit[j]=0;
            }
        }
    }

   int n;
   cin>>n;
   bool f = false;
   for(int b=2;b<N/2;b++)
   {
       if(!bit[n+b] && !bit[b])
       {
           cout<<n+b<<" "<<b<<endl;
           break;
       }
   }


    return 0;
}
