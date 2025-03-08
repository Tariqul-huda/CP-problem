#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    sort(s.begin(),s.end());
    map<char,int>mp;
    for(int i =0;i<s.size();i++)mp[s[i]]++;
    for(auto i:mp)cout<<i.first << " "<< i.second<<endl;

    return 0;
}