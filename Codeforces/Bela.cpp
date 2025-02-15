#include<bits/stdc++.h>
using namespace std;

    // @author : tariq002

#define endl '\n'
#define int long long
/*------------X------------*/
void asi(map<char,pair<int,int>>&mp,char c,int dor,int no){
    mp[c].first = dor;
    mp[c].second = no;
}
int_fast32_t main()
{
    ios_base::sync_with_stdio(false);

    map<char,pair<int,int>>mp;
    asi(mp,'A',11,11);
    asi(mp,'K',4,4);
    asi(mp,'Q',3,3);
    asi(mp,'J',20,2);
    asi(mp,'T',10,10);
    asi(mp,'9',14,0);
    asi(mp,'8',0,0);
    asi(mp,'7',0,0);
    
    int n;
    char c;
    cin >> n >> c;
    n*=4;
    int sum = 0;
    while(n--){
        string s;
        cin >> s;
        if(s[1]==c)sum+=mp[s[0]].first;
        else sum+=mp[s[0]].second;
    }
    cout<<sum<<endl;


    return 0;
}