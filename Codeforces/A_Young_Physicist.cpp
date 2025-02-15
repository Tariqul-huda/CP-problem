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
struct Coord{
    int x;
    int y;
    int z;
};
typedef struct Coord Coord;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int x,y,z,n,sum1,sum2,sum3;
    cin>>n;
    sum1=sum2=sum3=0;
        vector<Coord>a;
    while(n--)
    {
        Coord l;
        cin>>x>>y>>z;
        l.x = x;
        l.y = y;
        l.z = z;
        a.push_back(l);
    }
    for(int i=0;i<a.size();i++)
    {   
        sum1+=a[i].x;
        sum2+=a[i].y;
        sum3+=a[i].z;
    }
    if(sum1!=0 || sum2!=0 || sum3!=0)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }

    return 0;
}