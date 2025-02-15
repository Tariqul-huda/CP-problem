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
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin>>n;
        int a[n];
        int target=0;
        bool is_paise = false;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            target+=a[i];
        }
       // cout<<target<<endl;
        target/=n;

        int bucket = 0;
        for(int i=0;i<n;i++)
        {
            if(a[i]>target)
            {
                bucket +=(a[i]-target);
            }
            else if(a[i]<target)
            {
                //cout<<i<<" "<<a[i]<<" "<<bucket<<endl;
                if(target-a[i]>bucket)
                {
                    cout<<"NO"<<endl;
                    is_paise = true;
                    break;
                }
                else
                bucket -= target-a[i];
            }
        }
        if(!is_paise)
        cout<<"YES"<<endl;


    }
    return 0;
}
