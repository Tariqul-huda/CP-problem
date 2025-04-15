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
    string s,p;
    cin >> p >> s;
    if(s.size()>2*p.size() or s.size()<p.size())cout<<"NO"<<endl;
    else{
        bool g = true;
        int i =0,j= 0;
        while(i<p.size() and j<s.size()){
            if(p[i] !=s[j]){
                g= false;
                break;
            }
            bool tk = false;
            if(j+1<s.size() and s[j+1]==p[i]){
                int r_p = p.size()-(i+1);
                int r_s = s.size()-(j+2);
                if(r_s>=r_p and r_s<=2*r_p)tk = true;
            }
            if(tk)i++,j+=2;
            else i++,j++;
        }
        if(g and i==p.size() and j==s.size())cout<<"YES"<<endl;
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