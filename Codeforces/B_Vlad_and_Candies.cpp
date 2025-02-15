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
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin>>n;
        bool is_false = false;
        vector<long long>a;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            a.push_back(x);
        }
        sort(a.begin(),a.end(),greater<long long>());
        for(auto i:a)
        cout<<i<<" ";

        if(n%2)
        {
        for(int i=0,j=1;j<n-1;i+=2,j+=2)
        {
            if(a[i]-a[j]>1)
            {
                cout<<"NO"<<endl;
                is_false = true;
                break;
            }
        }
        if(!is_false)
        {
            if(a[a.size()-1]>=2)
            {
                cout<<"NO"<<endl;
            }
            else
            cout<<"YES"<<endl;
        }


        }
        else
        {
         for(int i=0,j=1;j<n;i+=2,j+=2)
        {
           //cout<<"YES"<<endl;
            if(a[i]-a[j]>1)
            {
                cout<<"NO"<<endl;
                is_false = true;
                break;
            }
        }
        if(!is_false)
        {
            cout<<"YES"<<endl;
        }
        }
    }
    return 0;
}