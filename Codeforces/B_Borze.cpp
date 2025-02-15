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
    string result = "";
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='.')
        {
            result.push_back('0');
        }
        else if(s[i]=='-' && s[i+1]=='.')
        {
            result.push_back('1');
            i+=1;
        }
        else if(s[i]=='-' && s[i+1]=='-')
        {
            result.push_back('2');
            i+=1;
        }
        
    }
    cout<<result<<endl;
    return 0;
}