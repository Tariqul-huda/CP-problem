#include<bits/stdc++.h>

using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int arr[n];
    for(int &i:arr)cin >> i;
    sort(arr,arr+n);
    for(int i =-m;i<=m;i++){
        if(!binary_search(arr,arr+n,i)){
            cout<<i<<endl;
            return 0;
        }
    }
}