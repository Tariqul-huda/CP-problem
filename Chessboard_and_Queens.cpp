#include<bits/stdc++.h>
using namespace std;

    // @author : tariq002

#define endl '\n'
#define int long long
/*------------X------------*/
int cnt;
bitset<30> rw,ld,rd;
int row[8]{};
bool distance(int i,int j, int k, int l){
    return abs(i-k)==abs(j-l);
}
bool can_place(int r,int c,vector<string>&arr){
    for(int prev = 0;prev<c;prev++){
        if(row[prev]==r or distance(r,c,row[prev],prev)){
            return false;
        }
    }
    return true;
}
void backtrack(vector<string>&arr, int c){
    if(c==8 ){
        cnt++;
        return;
    }
    for(int r = 0;r<8;r++){
        if(arr[r][c] !='*' and !rw[r] and !ld[r-c+8-1] and !rd[r+c]){
            rw[r] = ld[r-c+8-1] = rd[r+c] = true;
            backtrack(arr,c+1);
            rw[r] = ld[r-c+8-1] = rd[r+c] = false;
        }
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);

    vector<string>arr;
    cnt= 0;
    memset(row,0,sizeof row);
    for(int i =0;i<8;i++){
        string s;
        cin >> s;
        arr.push_back(s);
    }
    backtrack(arr,0);

    cout<<cnt<<endl;



    return 0;
}