#include<bits/stdc++.h>
using namespace std;

    // @author : tariq002

#define endl '\n'
#define int long long
/*------------X------------*/

signed main()
{
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;
    string org,gues;
    cin >> org >> gues;
    int r,s;
    r = s =0;
    for(int i=0;i<n;i++){
        if(org[i]==gues[i]){
            org[i]= '1';
            gues[i] = '2';
            r++;
        }
        
    }
    for(int i=0;i<n;i++){
        if(org.find(gues[i])!= string::npos){
            org[org.find(gues[i])]='1';
            gues[i]='2';
            s++;
        }
    }
    cout<<r << " "<<s << endl;



    return 0;
}