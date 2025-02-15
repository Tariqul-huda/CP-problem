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
string ans(int n)
{
    
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    map<char,int>mp;
    int i=1;
    for(char c = 'a';c<='z';c++,i++)
    {
        mp[c]=i;
    }
    while (T--) {
        int n;
        cin>>n;
        int cnt = 0;
        bool paise = false;
        for(char c='a';c<='z';c++)
        {
            for(char ch='a';ch<='z';ch++)
            {
                for(char chr='a';chr<='z';chr++)
                {
                    if(mp[c]+mp[ch]+mp[chr]==n)
                    {
                    cout<<(char)c<<(char)ch<<(char)chr<<endl;
                    paise = true;
                    break;

                    }

                }
                if(paise)
                break;
            }
            if(paise)
            {break;}
        }
        

    }
    return 0;
}