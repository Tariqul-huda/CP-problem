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
        int N;
        cin >> N;
        string s;
        cin>>s;
        int zero = count(s.begin(),s.end(),'0');
        int one = count(s.begin(),s.end(),'1');
        bool flag = false;
        if(!zero)
        {
            cout<<"NO"<<endl;
            continue;
        }
        if(zero>one)
        {
            cout<<"YES"<<endl;
            continue;
        }
        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i]!=s[i+1])
            {
                flag=true;
            cout<<"YES"<<endl;
            break;
            }
        }
        if(!flag)
        {
            cout<<"NO"<<endl;
        }

        

    }
    return 0;
}