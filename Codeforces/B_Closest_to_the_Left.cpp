#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin >> n >> k;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    while(k--){
        int x;
        cin >> x;
        cout<<upper_bound(a,a+n,x)-a<<endl;
    }
    return 0;
}