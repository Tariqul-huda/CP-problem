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
    int n, x;
    cin >> n >> x;
    int temp = n;
    int arr[n];
    for(int &i:arr)cin >> i;
    vector<int>possible_k;
    for(int i =1;i*i<=n;i++){
        if(n%i==0){
            possible_k.push_back(i);
            if(n/i!=i and n/i!=n)possible_k.push_back(n/i);
            temp/=i;
        }
    }
    
    for(auto i:possible_k)cerr<<i<<endl;

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