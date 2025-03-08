#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cc = 0;
        for(int i =s.size()-1;i>0;i--){
            if(s[i]!=s[i-1])cc++;
        }
        cout<<cc<<endl;
    }
    return 0;
}