#include<bits/stdc++.h>
using namespace std;
vector<int>arr;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int &i:arr)cin>>i;
    map<int,int>mp;
    for(int i =0;i<n;i++)mp[arr[i]]++;

    for(auto i:mp){
        while(i.second){
            cout<<i.first<<" ";
            i.second--;
        }
    }

    return 0;
}