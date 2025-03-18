#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int main()
{
    int t;
    cin >> t;
    unordered_map<int,int>mp;
    while(t--){
        int n,k;
        cin >> n >> k;
        int cnt = 0;
        if(n%2==1){
            cnt++;
            n-=k;
        }
        cnt +=n/(k-1);
        int remainder = n%(k-1);
        // cerr<<remainder<<endl;
        if(remainder)cnt++;
        cout<<cnt<<endl;

        

    }
    return 0;
}