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
     int n;
     n = stoll(s);
     if(n<33)cout<<"NO"<<endl;
     else {
        size_t f = s.find("33");
        while(f!=string::npos){
        s.erase(f,2);
        f = s.find("33");
        }
        if(s.size()==0){
            cout<<"YES"<<endl;
        }
        else{
            n = stoll(s);
            if(n%33==0)cout<<"YES"<<endl;
            else{
                cout<<"NO"<<endl;
            }
        }
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