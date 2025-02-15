#include "bits/stdc++.h"
using namespace std;
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
#define mod 1e9 + 7
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++)
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--)
#define INF 1000000000000000003
#define int long long
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define POB pop_back
#define MP make_pair
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int a,b;
        cin>>a>>b;
        bool length = false;
        bool width = false;
           pair<int , int>result1;
            pair<int, int>result2,result3;
        if(b%2)
        {
            length = false;
        }
        if(a%2)
        {
            width = false;
        }
        // if(length == false && width == false)
        // {
        //     cout<<"No"<<endl;
        //     continue;
        // }
        if(a%2==0)
        {
            result1.first = a;
            result1.second = b;
            result2.first = a/2;
            result2.second = 2*b;
            //cout<<result2.first <<" "<<result2.second<< " "<<endl;
           
            if(result2.first ==b && result2.second == a)
            length = false;
            else
            length = true;
            //cout<<length<<endl; 
        }
        else if(b%2==0)
        {
             result1.first = a;
            result1.second = b;
            result2.first = 2*a;
            result2.second = b/2;
            if(result2.first ==b && result2.second == a)
            width = false;
            else
            width = true;

        }
        
        if(length==false && width == false)
        {
            cout<<"No"<<endl;
        }
        else
        cout<<"Yes"<<endl;




    }
    return 0;
}