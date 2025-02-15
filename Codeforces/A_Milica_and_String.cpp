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
    int T,n,k;
    cin >> T;
    
    while (T--) {
    cin>>n>>k;
    string s;
    cin>>s;
    int l = count(s.begin(),s.end(),'B');
    char c;
    int b_c = 0;
    if(k==0)
    {
        cout<<1<<endl;
        cout<<n<<" A"<<endl;
    }
    else if(l==k)
    {
        cout<<0<<endl;
    }
    else
    {
        if(l>k)
        {
            int j;
            for( j=n-1;j>=0;j--)
            {
                if(s[j]=='B')
                b_c++;
                if(b_c>k)
                {
                    break;
                }
            }
            cout<<1<<endl;
            cout<<j+1<<" "<<'A'<<endl;

        }
        else
        {
            int j;
            for(j=0;j<n;j++)
            {
                if(s[j]=='A')
                b_c++;
                if(b_c==abs(l-k))
                break;
            }
            cout<<1<<endl;
            
            cout<<j+1<<" "<<'B'<<endl;


        }
    }

    }
    return 0;
}