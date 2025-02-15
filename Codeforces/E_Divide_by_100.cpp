#include<bits/stdc++.h>
using namespace std;

    // @author : tariq002

#define endl '\n'
#define int long long
/*------------X------------*/

signed main()
{
    ios_base::sync_with_stdio(false);

    string s,t;
    cin >> s >> t;
    int zero = t.size()-1;
    int dot_position = s.size()-zero;
    int last_zero = -1;

    if(dot_position<=0){
        
        string result="0.";
        for(int i=1;i<=abs(dot_position);i++){
            result.push_back('0');
        }
        for(int i=0;i<s.size();i++){
            result.push_back(s[i]);
        }
        int i;
        for( i=result.size()-1;result[i]=='0' and i>=abs(dot_position);i--);
        for(int j=0;j<i+1;j++)cout<<result[j];


    } 
    else{
        
        string result ="";
       
        for(int i=0;i<s.size();i++){
            if(i==dot_position){
                result.push_back('.');
            }
            result.push_back(s[i]);
            

        }
       // cout<<result<<endl;
        int i;
        for( i=result.size()-1;result[i]=='0' and i>=dot_position;i--);
        if(result[i]!='.')i++;
        for(int j = 0;j<i;j++)cout<<result[j];
        




    }

    return 0;
}