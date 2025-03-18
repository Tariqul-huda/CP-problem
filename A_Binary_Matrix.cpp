#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

signed main(){
    int t;
    cin >> t;
    while(t--){

        int n ,m;
        cin >> n >> m;
        vector<string>ab;
        for(int i = 0;i<n;i++){
            string s;
            cin >> s;
            ab.push_back(s);
        }
        int row_count = 0;
        int col_count = 0;
        //row count
        for(int i =0;i<n;i++){
            if(count(ab[i].begin(),ab[i].end(),'1')&1)row_count++;
        }
        for(int row = 0;row<m;row++){
            int temp = 0;
            for(int col = 0;col<n;col++){
                if(ab[col][row]=='1')temp++;
            }
            if(temp&1)col_count++;
        }
        cerr<<row_count<<" "<<col_count<<endl;
    }
    return 0;
}