#include<bits/stdc++.h>
using namespace std;

    // @author : tariq002

#define endl '\n'
#define int long long
/*------------X------------*/

signed main()
{
    ios_base::sync_with_stdio(false);
    vector<string>s;
    s.push_back("");
    s.push_back("A");
    s.push_back("right of A");
    s.push_back("left of D");
    s.push_back("D");
    s.push_back("right of D");
    s.push_back("middle of D and H");
    s.push_back("left of H");
    s.push_back("H");
    s.push_back("right of H");
    s.push_back("right of right of H");
    int n;
    cin >> n;
    char c;
    for(int i=0;i<n;i++)cin>>c;
    int q;
    cin>> q;
    while(q--){
        int x;
        cin >> x;
        if(q==0)cout<<s[x];
        else
   cout<<s[x]<<endl;
    }

    return 0;
}