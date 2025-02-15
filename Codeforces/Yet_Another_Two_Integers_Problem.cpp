#include "bits/stdc++.h"
using namespace std;
#define int long long
#define OR ||
#define AND &&
int counter;
void cal(int *target,int div)
{
    if(*target>0)
    {

        if(*target>=div)counter++;
    *target%=div;

    }
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
      int a, b;
      cin >> a >> b;
      int target = abs(b-a);
      cout<<((target+9)/10)<<endl;

    }
    return 0;
}