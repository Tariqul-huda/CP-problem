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
    string s;
    cin>>s;
    int start = 0;
    int endd = s.size()-1;
    while(start<endd)
    {
        if(s[start]!=s[endd] && (s[start]!='?' && s[endd]!='?'))
        {
            cout<<-1<<endl;
            return 0;
        }
        else if(s[start]!=s[endd])
        {
            if(s[start]!='?')
            {
                s[endd] = s[start];
            }
            else
            {
                s[start] = s[endd];
            }
        }
        else if(s[start]=='?' && s[endd]=='?')
        {
            s[start] = s[endd]='a';
        }
        start++;endd--;

    }
    if(s.size()%2==1 && s[s.size()/2]=='?')
    s[s.size()/2]='a';
    cout<<s<<endl;
    
    return 0;
}