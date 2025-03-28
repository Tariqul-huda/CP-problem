#include<bits/stdc++.h>
using namespace std;

    // @author : tariq002

#define endl '\n'
#define int long long
/*------------X------------*/

signed main()
{
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;
    int arr[5]={6,8,4,2,1};
    if(n==0)cout<<1<<endl;
    else
    cout<<arr[n%4]<<endl;

    return 0;
}