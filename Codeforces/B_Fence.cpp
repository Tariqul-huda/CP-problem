#include<bits/stdc++.h>
using namespace std;

    // @author : tariq002

#define endl '\n'
#define int long long
/*------------X------------*/

signed main()
{
    ios_base::sync_with_stdio(false);

    int n,k;
    cin >> n >> k;
    int sum = 0;
    int min_sum = INT_MAX;
    int idx = 0;
    int a[n];
    for(int &i:a)cin >> i;
    for(int i=0;i<k;i++)sum+=a[i];
    for(int i=1;i<n;i++){
        if(sum<min_sum){
            min_sum = sum;
            idx = i;
        }
        sum-=a[i-1];
        sum+=a[i+k-1];
        cerr<<sum<<endl;
    }
    cout<<idx+1<<endl;


    return 0;
}