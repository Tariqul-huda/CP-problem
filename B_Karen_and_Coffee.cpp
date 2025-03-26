#include <bits/stdc++.h>
using namespace std;
const int limit = 200000;
int main() {
    int n, k, m;
    cin >> n >> k >> m;
    int arr[limit+5] = {0};
    while(n--){
        int l,r;
        cin >> l >> r;
        arr[l]++;
        arr[r+1]--;
    }
    int pref[limit+5];
    for(int i =1;i<limit+5;i++){
        pref[i] = arr[i]+pref[i-1];
    }
    
    int ans_pref[limit+5]{};
    for(int i = 1;i<limit+5;i++){
        ans_pref[i] = ans_pref[i-1]+(pref[i]>=k);   
    }
    for(int i =90;i<101;i++){
        cout<<i<<" "<<ans_pref[i]<<endl;
    }
    while(m--){
        int cnt = 0;
        int l,r;
        cin >> l >> r;
        cnt = ans_pref[r]-ans_pref[l-1];
        cout<<cnt<<endl;
    
    }
    



    // Your logic here

    return 0;
}