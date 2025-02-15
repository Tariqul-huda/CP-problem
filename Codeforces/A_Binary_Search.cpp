#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
int main(){
    fast_io
    int n,k;
    cin >> n >> k;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    while(k--){
        int x;
        cin >> x;
        if(binary_search(a,a+n,x))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}