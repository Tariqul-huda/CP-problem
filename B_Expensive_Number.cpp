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
     string s;
     cin >> s;
     int idx = 0;
    for(int i =s.size()-1;i>=0;i--){
        if(s[i]!='0'){
            idx = i;
            break;
        }
    }
    int cnt = s.size()-idx-1;
    for(int i =idx-1;i>=0;i--){
        if(s[i]!='0')cnt++;
    }
    cout<<cnt<<endl;

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