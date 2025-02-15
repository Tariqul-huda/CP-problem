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
    int t;
    cin>>t;
    while(t--)
    {
        string s,r;
        cin>>s;
        stack<int>temp_low,temp_high;
        int low_c= -1;
        int up_c = -1;
        r = "";
        for(int i=0;i<s.size();i++)
        {
            if(islower(s[i]) && s[i]!='b')
            {
                r.push_back(s[i]);
                low_c++;
                temp_low.push(i);
            }
            else if(isupper(s[i]) && s[i]!='B')
            {
                r.push_back(s[i]);
                up_c++;
                temp_high.push(i);
            }
            if(s[i]=='b')
            {
               // cout<<r.size()<<endl;
                if(!temp_low.empty())
                {
                    //r.erase(low_c,1);

                    s[temp_low.top()] =32;
                    low_c--;
                    temp_low.pop();
                }
            }
            else if(s[i]=='B')
            {
                if(!temp_high.empty())
                {
                    //r.erase(up_c,1);
                    s[temp_high.top()]= 32;
                    up_c--;
                    temp_high.pop();
                }
            }
        }
        //cout<<s<<endl;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=32 && (s[i]!='B' && s[i]!='b'))
            cout<<s[i];
        }
        cout<<endl;
    }
    
    return 0;
}