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
        int a,b,c;
        cin>>a>>b>>c;
        if(a==b && b==c)
        {
            cout<<"1 1 1"<<endl;
        }
        else if(a==max(a,max(b,c)))
        cout<<"1 0 0"<<endl;
        else if(b==max(a,max(b,c)))
        cout<<"0 1 0"<<endl;
        else if(c==max(a,max(b,c)))
        cout<<"0 0 1"<<endl;
        else if(a==b)
        {
            cout<<"1 1 0"<<endl;
        }
        else if(b==c)
        {
            cout<<"0 1 1"<<endl;
        }
        else if(a==c)
        cout<<"1 0 1"<<endl;
        else
        cout<<"0 0 0"<<endl;
    }
    return 0;
}