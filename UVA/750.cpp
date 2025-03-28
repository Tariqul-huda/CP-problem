#include<bits/stdc++.h>
using namespace std;

    // @author : tariq002

#define endl '\n'

/*------------X------------*/
int row[8],a,b,linebreak;
bool distance(int i, int j , int k, int l){
    return abs(i-k) == abs(j-l);
}
bool can_place(int r, int c){
    for(int prev=0;prev<c;prev++){
        if(row[prev]==r or distance(r,c,row[prev],prev))return false;
    }
    return true;
}
void backtrack(int c){
    if(c==8 and row[b]==a){
        
        printf("%2d      %d",++linebreak,row[0]+1);
        for(int i = 1;i<8;i++){
            cout<<" "<<row[i]+1;
        }
        cout<<endl;
        return ;
    }
    for(int r = 0;r<8;r++){
        if(c==b and r!=a)continue;
        if(can_place(r,c)){
            row[c]= r;
            backtrack(c+1);
        }
    }
}
signed main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        linebreak = 0;
        memset(row,0,sizeof row);
        scanf("%d %d",&a,&b);
        a--,b--;
        cout<<"SOLN       COLUMN"<<endl;
        cout<<" #      1 2 3 4 5 6 7 8"<<endl;
        cout<<endl;
        backtrack(0);
        if(t)cout<<endl;
    }


    

    return 0;
}