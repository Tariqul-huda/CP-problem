#include "bits/stdc++.h"
using namespace std;
#define max(a, b) (a < b ? b : a)
//#define min(a, b) ((a > b) ? b : a)
#define int long long
#define OR ||
#define AND &&
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    
    cout<<min({(k*l)/nl,c*d,p/np})/n<<endl;

    return 0;
}