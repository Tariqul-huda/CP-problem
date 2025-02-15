#include<bits/stdc++.h>
using namespace std;

    // @author : tariq002

#define endl '\n'
#define int long long
/*------------X------------*/

signed main()
{
    ios_base::sync_with_stdio(false);

    int t;
    
    while(cin>>t and t){
       vector<string>a(t+1,"");
       string cd,code;
       cin >> cd >> code;
       int prev = code.size();
       a[prev]=cd;
       
       for(int i=1;i<t;i++){
        cin >> cd >> code;
        int j=prev+1;
        for(int temp=0;temp<code.size();j++){
            if(a[(j%t==0)?t:j%t]=="")temp++;
        }
        int cnt = code.size();
        a[((j-1)%t==0)?t:(j-1)%t]=cd;
        prev = (((j-1)%t==0)?t:(j-1)%t);
        // cout<<(((j-1)%t==0)?t:(j-1)%t)<<endl;
        // cout<<prev<<" ";
        // cout<<(int)(a[prev]=="")<<endl;
        // cout<<cd<<" "<<code<<" "<<cnt<<endl;

       }
        for(int i=1;i<a.size();i++){
            cout<<a[i]<<" ";
        }
    }

    return 0;
}