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
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int start = 0,end = n-1;
    int serena=0,dimri = 0;
    bool is_serena = true;
    while(start<=end)
    {
        if(is_serena)
        {
            serena +=max(a[start],a[end]);
            is_serena= false;
            if(max(a[start],a[end])==a[start])
            {
                start++;
            }
            else
            end--;
        }
        else
        {
            dimri +=max(a[start],a[end]);
            is_serena = true;
              if(max(a[start],a[end])==a[start])
            {
                start++;
            }
            else
            end--;
        }
        
    }
    cout<<serena<<" "<<dimri<<endl;
    return 0;
}