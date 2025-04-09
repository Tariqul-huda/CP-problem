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

int joseph(int n,int k){
    if(n==1)return 0;
    return (joseph(n-1,k)+k)%n;
}
void crack()
{
    int n,k;
    cin >> n>>k;
    cout<<joseph(n,k)+1<<endl; 
}

int32_t main()
{
    faf auto st = clock();
    test
    {
        cout << "Case " << ++tc << ": ";
        crack();
    }
    //cerr << 1.0 * (clock() - st) / CLOCKS_PER_SEC << endl;
    return 0;
}