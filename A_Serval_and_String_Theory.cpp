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
     int n,k;
     cin >> n >> k;
     string s;
     cin >> s;
     string r = s;
     set<char>ab;
     for(char c:s)ab.insert(c);
     reverse(r.begin(),r.end());
     if(k==0){
        if(s<r){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
     }
     else{
        if(k and s.size()>1 and ab.size()>1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
     }
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