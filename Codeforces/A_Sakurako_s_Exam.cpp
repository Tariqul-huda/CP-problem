#include "bits/stdc++.h"
using namespace std;
#define int long long
#define endl '\n'
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int a,b;
        cin >> a >> b;
        //cout<<T<<endl;
        if(a && b==0){
            if(a%2){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
        else if(a==0 and b){
            if(b%2){
                cout<<"NO"<<endl;
            }
            else cout<<"YES"<<endl;
        }
        else if(a and b){
            if(a%2){
                cout<<"NO"<<endl;
            }
            else{
                if(b%2==0 or (a/2+b)%2==0){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
        }
        else{
            cout<<"YES"<<endl;
        }
       

        
    }
    return 0;
}