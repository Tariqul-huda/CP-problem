#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    set<int>ab;
    for(int i =1;i*i<=n;i++){
        if(n%i==0){
            ab.insert(i);
            ab.insert(n/i);
        }
    }
    for(auto i:ab){
        cout<<i<<endl;
    }
    return 0;
}