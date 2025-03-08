#include<iostream>

using namespace std;

int to_digit(char c){
    return c-'0';
}
int main(){
    string s;
    cin >> s;
    if(s.size()>=1){
        for(int i =0;i<s.size();i++){
            if(s[i]=='8' or s[i] == '0'){
                cout<<"YES"<<endl;
                cout<<(s[i]=='8'?8:0)<<endl;
                return 0;
            }
        }
    }
    if(s.size()>=2){
        for(int i =0;i<s.size();i++){
            for(int j = i+1;j<s.size();j++){
                int num = (to_digit(s[i])*10+to_digit(s[j]));
                if(num%8==0){
                    cout<<"YES"<<endl;
                    cout<<num<<endl;
                    return 0;
                }
            }
        }
    }
    if(s.size()>=3){
        for(int i =0;i<s.size();i++){
            for(int j =i+1;j<s.size();j++){
                for(int k = j+1;k<s.size();k++){
                    int num = to_digit(s[i])*100+to_digit(s[j])*10+to_digit(s[k]);
                    if(num%8==0){
                        cout<<"YES"<<endl;
                        cout<<num<<endl;
                        return 0;
                    }
                }
            }
        }
    }
    cout<<"NO"<<endl;
    return 0;
}