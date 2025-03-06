#include<bits/stdc++.h>
using namespace std;

    // @author : tariq002

#define endl '\n'
#define int long long
/*------------X------------*/
int to_digit(char c){
    return c-'0';
}
signed main()
{
    ios_base::sync_with_stdio(false);

    string s;
    cin >> s;
    bool is_zero =  false;
    int ans = 1;
    int i;
    for(i =s.size()-1;i>=0;i--){
        if(!to_digit(s[i])){
            is_zero = true;
            break;
        }
        ans *= to_digit(s[i]);
    }

    if(is_zero){
        int carry = 1;
        while(i>=0 and carry){
          
            if(to_digit(s[i])==0){
                carry = 1;
                s[i] = '9';
            }
            else{
                carry = 0;
                s[i] = (to_digit(s[i])-1)+'0';
            }
            i--;
        }
        ans = 1;
        for(int i =s[0]=='0';i<s.size();i++)
        ans*=to_digit(s[i]);
        cout<<ans<<endl;
        
    }
    else{
        cout<<ans<<endl;
    }

    return 0;
}