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
const int N = 1e5+3;

void crack()
{
    int n,k;
    cin >> n >> k;
    vector<int>a(n+1,0);
    a[0]=-1;
    bool ab[N]={true};
    int j = 1;
    set<int>ss;
    for(int i=1;i<=n;i++)ss.insert(i);
    for(int i=k;i<=n;i+=k){
        a[i]= j;
        ss.erase(j);
        j++;
    }
    for(int i=1;i<=n;i++){
        if(!a[i]){
            a[i]=*ss.begin();
            ss.erase(ss.begin());
        }
    }
    for(int i=1;i<=n;i++)cout<<a[i]<<" ";
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