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
        long long x1,y1,x2,y2,sum;
        sum=0;
        cin>>x1>>y1>>x2>>y2;
        if(y2<y1)
        {
            cout<<-1<<endl;
        }
        else
        {
        long long y_d = abs(y2-y1);
        sum+=y_d;
        x1+=y_d;
        y1+=y_d;
        if(x1>=x2)
        {
            long long x_d = abs(x2-x1);
            sum+=x_d;
            cout<<sum<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }

        }

    }
    return 0;
}