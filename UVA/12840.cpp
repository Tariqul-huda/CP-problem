#include<bits/stdc++.h>
using namespace std;

    // @author : tariq002

#define test  \
    int T, tc = 0;    \
    cin >> T; \
    while (T--)
#define faf ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define endl '\n'
#define int long long
/*------------X------------*/

bool solve(vector<int>&arr, int target, int current, int pos){
    if(pos==arr.size() or current == target){
        return current == target;
    }
    

}
void crack()
{
    int n,k;
    cin >> n >> k;
    vector<int>arr(n);
    for(int i =0;i<n;i++)cin>>arr[i];
    sort(arr.begin(),arr.end(),greater<int>());
    


}

int32_t main()
{
    faf auto st = clock();
    test
    {
        //cout << "Case " << ++tc << ": ";
        crack();
    }
    //cerr << 1.0 * (clock() - st) / CLOCKS_PER_SEC << endl;
    return 0;
}