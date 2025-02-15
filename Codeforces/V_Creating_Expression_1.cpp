#include "bits/stdc++.h"
using namespace std;
#define int long long
#define OR ||
#define AND &&
int counter;
bool found;
void recursion(int *a,int n,int pos,int current_sum,int target)
{

    if(pos==n)
    {
        if(current_sum==target) found = true ;
        return;
    }
    recursion(a,n,pos+1,current_sum+a[pos],target);
    recursion(a,n,pos+1,current_sum-a[pos],target);



}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,target;
    cin >> n >> target;
    int a[n];
    for(int i = 0; i < n;i++)
    cin>>a[i];
    recursion(a,n,1,a[0],target);
    if(found)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}