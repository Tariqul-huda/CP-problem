#include "bits/stdc++.h"
using namespace std;
#define int long long
#define endl '\n'
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    string t;
    t = s;
    for(int i =0;i<s.size();i++)t[i] = '0';
    map<char,int>mp;
    for(int i=0;i<s.size();i++)mp[s[i]]++;
    int odd_count = 0;
    for(auto i:mp)odd_count+=(i.second&1);
    if(odd_count>1){
        cout<<"NO SOLUTION"<<endl;
    }
    else{
        int l = 1;
        for(auto i:mp){
            
            int remainder = i.second%2;
            i.second-=remainder;
            for(int k=1;k<=i.second;l++,k+=2){
                t[s.size()-l]=t[l-1]=i.first;
                
            }
 
            
            if(t[s.size()/2]=='0' and remainder){
                t[s.size()/2]=i.first;
            }
            else if((t[s.size()]+1)/2=='0' and remainder){
                t[(s.size()+1)/2] = i.first;
            }
           
        }
    cout<<t<<endl;
    }
    return 0;
}
