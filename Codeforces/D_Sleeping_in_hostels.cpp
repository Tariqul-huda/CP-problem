#include<bits/stdc++.h>
using namespace std;

    // @author : tariq002

#define endl '\n'
#define int long long
/*------------X------------*/

signed main()
{
    ios_base::sync_with_stdio(false);

    string s;
    while(cin>> s){
        int top_x = s.find_first_of('X')-1;
        int bottom_x = s.size()-s.find_last_of('X')-2;
        int first_x = 0;
        int second_x = 0;
        bool is_first = false;
        bool is_second = false;
        
        int max_value = INT_MIN;
        for(int i=0;i<s.size();i++){
            if(s[i]=='X'){
                int j=i+1;
                while(s[j]!='X' and j<s.size())j++;
                max_value = max(max_value,(j==s.size())?0:j-i-1);

            }
        }
        max_value = (max_value -1) /2;  
        
        if(top_x>= max_value or bottom_x>=max_value){
            cout<<max(top_x,bottom_x)<<endl;
        }
        else{
           
        cout<<max_value<<endl;

        }

        

    }   

    return 0;
}