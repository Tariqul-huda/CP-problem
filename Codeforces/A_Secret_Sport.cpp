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
        unordered_map<char,int>b;
    while (T--) {
        int n;
        cin>>n;
        while(n--)
        {
            char c;
            cin>>c;
            b[c]++;

        }
        if(b['A']>b['B'])
        printf("A\n");
        else if(b['B']>b['A'])
        printf("B\n");
        else
        printf("?\n");
        cout<<b['A']<<" "<<b['B'];
        b.clear();

    }
    return 0;
}