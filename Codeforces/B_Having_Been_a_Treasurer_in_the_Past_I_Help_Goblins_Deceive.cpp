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
     string s;
     cin >> s;
     map<char,int>mp;
     for(int i =0;i<s.size();i++)mp[s[i]]++;
     
     if(!mp['-'] or !mp['_'])cout<<0<<endl;
     else{
        int first = mp['-']/2;
        int second = mp['-'] - first;
        cout<<(mp['_']*second)*first<<endl;

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