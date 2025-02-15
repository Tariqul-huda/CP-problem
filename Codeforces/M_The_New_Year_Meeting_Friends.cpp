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
    vector<int>a;
    int x,y,z;
    cin>>x>>y>>z;
    a.push_back(x);
    a.push_back(y);
    a.push_back(z);
    sort(a.begin(),a.end());
    int distance = abs(x-a[1])+abs(y-a[1])+abs(z-a[1]);
    cout<<distance<<endl;

    return 0;
}