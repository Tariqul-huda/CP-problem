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


void crack()
{
    int n;
    cin >> n;
    int arr[n];
    int minn = LLONG_MAX;
    unordered_map<int,int>mp;
    int min_idx = 0;
    set<int>in;
    for(int i =0;i<n;i++){
        cin >> arr[i];
        if(arr[i]<minn){
            minn = arr[i];
            min_idx = i;
        }
        in.insert(arr[i]);
        mp[arr[i]]++;
    }
    sort(arr,arr+n);
    
        int gcd = 0;
        for(int i =1;i<n;i++){
            if(arr[i]%arr[0]==0){
                gcd = __gcd(arr[i],gcd);
            }
        }
        if(gcd ==minn){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
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