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
     vector<int>ab(2*n);
     int arr[n][n];
     set<int>abb;
     for(int i =1;i<=2*n;i++)abb.insert(i);
     for(int i =0;i<n;i++){
        for(int j = 0;j<n;j++){
            int x;
            cin >> x;
            ab[i+j+1] =x; 
            if(abb.find(x)!=abb.end())abb.erase(x);
        }
     }
     ab[0] = *abb.begin();
     for(int i:ab)cout<<i<<" ";
     cout<<endl;
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