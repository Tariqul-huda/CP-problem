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
#define odd(n) ((n)%2==1)
#define OR ||
#define AND &&
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
        set<int>r;
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            r.insert(x);
            mp[x]++;
        }
        if(r.size()>2)
        {
            cout<<"NO"<<endl;
        }
        else if(n==2 OR r.size()==1)
        cout<<"YES"<<endl;
        else if(n>=3)
        {
                int first_c = mp[*r.begin()];
                int second_c = mp[*r.rbegin()];
            if(odd(n))
            {
                int odd_c = (n+1)/2;
                int even_c = odd_c -1;
                if((first_c==even_c OR first_c ==odd_c) AND (second_c==odd_c OR second_c ==even_c))
                cout<<"YES"<<endl;
                else
                cout<<"NO"<<endl;

            }
            else
            {
                int even_cc = n/2;
                if(first_c==even_cc AND second_c==even_cc)
                {
                    cout<<"YES"<<endl;
                }
                else
                cout<<"NO"<<endl;
            }

        }
        

    }
    return 0;
}