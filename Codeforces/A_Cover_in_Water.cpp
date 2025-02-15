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
        int n,sum;
        sum=0;
        cin>>n;
        string s;
        cin>>s;
        int ccc = count(s.begin(),s.end(),'.');
        if(!ccc)
        {
            cout<<0<<endl;
            
        }
        else
        {
            if(s.find("...")!=string::npos)
            {
                cout<<2<<endl;
            }
            else
            {
                cout<<count(s.begin(),s.end(),'.')<<endl;
            }
            // int dott = s.find_first_of('.');
            // int c=0;
            // for(int i=dott;i<s.size();i++)
            // {
            //     if(s[i]=='#' || i+1==s.size())
            //     {
            //         if(i+1==s.size()&&s[i]=='.')
            //         c++;
                    
            //         if(c==1)
            //         {
            //             sum+=c;
            //         }
            //         else if(c==2)
            //         {
            //             sum+=c;
            //         }
            //         else
            //         sum+=floor((c+1)/2.0);
            
            //         c= 0;
            //     }
            //     else
            //     {
            //         c++;
            //     }
            // }
            //cout<<sum<<endl;
        }
    }
    return 0;
}