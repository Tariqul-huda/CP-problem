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
int ass;

void largest_sub(string s, int l, int r,map<pair<int,int>,bool>&freq){
    if(l == 0 and r==0){
        ass = max(r+1,ass);
     return;   
    }
    int ab_c=0,ba_c=0;
    if(!freq[{l,r}]){
    for(int i=l;i<r;i++){
        if(s[i]=='a' and s[i+1]=='b')ab_c++;
        if(s[i]=='b' and s[i+1]=='a')ba_c++;
    }
    if(ab_c == ba_c){
        ass = max(r-l+1,ass);
        cout<<l<< " "<<r<<" "<<r-l<<endl;
       // cout<<ab_c<<endl;
        return;
    }
    else{
        largest_sub(s,l+1,r,freq);
        largest_sub(s,l,r-1,freq);
    }

    }
    freq[{l,r}]=true;
    return;

}

void crack()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<pair<int,int>,bool>freq;
    ass = 0;
     largest_sub(s,0,n-1,freq);
     cout<<ass<<endl;
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