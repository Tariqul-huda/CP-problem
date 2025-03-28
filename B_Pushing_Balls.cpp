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

bool ans_up(vector<string>&s,int i,int j){
    if(i==0){
        return s[0][j]=='1';
    }
    return s[i][j]=='1' and ans_up(s,i-1,j);

}
bool ans_left(vector<string>&s,int i, int j){
    if(j==0){
        return s[i][j]=='1';
    }
    return s[i][j]=='1' and ans_left(s,i,j-1);
}
void crack()
{
     int n,m;
     cin >> n >> m;
     vector<string>s(n);
     for(int i =0;i<n;i++)cin>>s[i];
     int cnt = 0;
     for(int i =0;i<n;i++){
        for(int j =0;j<m;j++){
            if(s[i][j]=='1')cnt++;
        }

     }
     if(cnt==0)cout<<"YES"<<endl;
     else{
        bool found = false;
        bool found2 = false;
        for(int i =0;i<n;i++){
            for(int j =0;j<m;j++){
               
                if(s[i][j]=='1'){
                    found  = ans_up(s,i,j);
                    found2 = ans_left(s,i,j);
                    if(!found and !found2){
                        cout<<"NO"<<endl;
                        return;
                    }
                }
               
            } 
            
        }
        if(found or found2)cout<<"YES"<<endl;
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