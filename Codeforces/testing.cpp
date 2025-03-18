#include<bits/stdc++.h>
using namespace std;

int main(){
    set<vector<int>>ab = {{1,7},{1,7}};
    for(auto i:ab){
        for(auto j:i)cout<< j << " ";
        cout<<endl;
    }
    
    return 0;
}