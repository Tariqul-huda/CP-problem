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
    string love,hate,end_s,add_s;
    love = "I love ";
    hate = "I hate ";
    add_s = "that ";
    end_s = "it";
    string result = "";

    int n;
    cin>>n;
    if(n==1)
    cout<<"I hate it"<<endl;
    else
    {
        for(int i=1;i<=n;i++)
        {
            if(i>1)
            result.append(add_s);
            if(i%2==1)
            {
                result.append(hate);
            }
            else
            {
                result.append(love);
            }
        }
        result.append(end_s);
        cout<<result<<endl;
    }
    return 0;
}