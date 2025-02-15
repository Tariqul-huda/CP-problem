#include "bits/stdc++.h"
using namespace std;
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
#define mod 1e9 + 7
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++)
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--)
#define INF 1000000000000000003
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define POB pop_back
#define MP make_pair
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin>>n;
        string s,temp;
        cin>>s;
        temp = s;
        int b = count(s.begin(),s.end(),'B');
        int a = count(s.begin(),s.end(),'A');
        sort(temp.begin(),temp.end());
        reverse(temp.begin(),temp.end());
        if(temp == s || a==0)
        {
            cout<<0<<endl;

        }
        else
        {
            int bb = s.find_last_of('B');
            int aa = s.find_first_of('A');
            int last_a = s.find_last_of('A');
            int count_a = count(s.begin()+aa,s.begin()+bb,'A');
            int count_b = count(s.begin()+aa,s.end(),'B');
            cout<<count_a+(count_b-1)<<endl;
        }


    }
    return 0;
}