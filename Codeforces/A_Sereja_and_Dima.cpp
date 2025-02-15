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
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        int start = 0;
        int end = n-1;
        int dimri = 0;
        int sereja = 0;
        bool serejaa = true;
        while(start<=end)
        {
            if(serejaa)
            {
                if(a[start]>a[end])sereja+=a[start++];
                else sereja+=a[end--];
                serejaa = false;
                //cout<<a[start]<< " "<<a[end]<<endl; 
            }
            else
            {
                if(a[start]>a[end])dimri+=a[start++];
                else dimri+=a[end--];
                serejaa = true;
                
            }
        }
        cout<<sereja<<" "<<dimri<<endl;
    
    return 0;
}