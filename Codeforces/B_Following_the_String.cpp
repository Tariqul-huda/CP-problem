#include "bits/stdc++.h"
using namespace std;

typedef long long int ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;

    while (T--) {
        string result = "";
        map<long long,set<char>>a;
        for(char c = 'a';c<='z';c++)
        {
            a[0].insert(c);
        }
        ll s;
        cin>>s;
        for(int i=1;i<=s;i++)
        {
            ll x;
            cin>>x;
            char temp;
            temp = *a[x].rbegin();
            result.push_back(temp);
            a[x+1].insert(temp);
            auto it = a[x].rbegin();
            a[x].erase(*it);

        }
        cout<<result<<endl;
    }
    return 0;
}