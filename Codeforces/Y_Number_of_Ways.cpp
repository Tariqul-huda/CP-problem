#include "bits/stdc++.h"
using namespace std;
#define int long long
#define OR ||
#define AND &&
int counter;
void step_counter(int start,int finish)
{
    if(start>finish)return;
    if(start==finish){counter++;return;}
    step_counter(start+1,finish);
    step_counter(start+2,finish);
    step_counter(start+3,finish);
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin >> n >> m;
    step_counter(n,m);
    cout<<counter<<endl;
    return 0;
}