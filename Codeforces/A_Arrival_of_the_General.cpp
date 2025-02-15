#include "bits/stdc++.h"
using namespace std;
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
#define mod 1e9 + 7
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++)
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--)
#define INF 1000000000000000003
#define int long long
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define POB pop_back
#define MP make_pair
void process(vector<int>arr, int min,int max,int n)
{
    
    auto it = find(arr.begin(),arr.end(),max);
    int min_dist =0;
    for( min_dist=n-1;min_dist>=0;min_dist--)
    {
        if(arr[min_dist]==min)
        break;
    }
    int temp = min_dist;
    min_dist =  n-min_dist-1;
    int max_dist = distance(arr.begin(),it);
    //cout<<max_dist<<endl;
    if(max_dist>temp)
    cout<<max_dist-1+min_dist;
    else
    cout<<max_dist+min_dist<<endl;
    


}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int>arr;
    set<int>temp;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
        temp.insert(x);
    }
    
    process(arr,*temp.begin(),*temp.rbegin(),n);

    return 0;
}