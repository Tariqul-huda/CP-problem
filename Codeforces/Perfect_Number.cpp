#include<bits/stdc++.h>
using namespace std;
bool is_perfect(int n){
    int ans = 0;
    while(n){
        ans+=n%10;
        n/=10;
    }
    return ans==10;
}
int main(){
    int k;
    cin >> k;
    int cnt = 0;
    for(int i=1;i<=1e9;i++){
        if(is_perfect(i))cnt++;
        if(cnt==k){
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}