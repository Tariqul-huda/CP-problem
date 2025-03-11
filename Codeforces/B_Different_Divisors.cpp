#include<bits/stdc++.h>
#define int long long

using namespace std;

int prime_find(int d, int x){
    int cnt = 0;
    for(int i =d+x;;i++){
        int cnt = 0;
        for(int j =2;j*j<=i;j++)cnt+=(i%j==0);
        if(cnt==0){
            return i;

        }
    }
}

signed main(){

    int t;
    cin >> t;
    while(t--){
        int d;
        cin >> d;
        int a,b;
        a = prime_find(d,1);
        b = prime_find(d,a);
        cout<<(min(a*b,a*a*b))<<endl;

    }
    return 0;
}
 