#include<bits/stdc++.h>
using namespace std;

    // @author : tariq002

#define test  \
    int T, tc = 0;    \
    cin >> T; \
    while (T--)
#define faf ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define endl '\n'
#define int long long
/*------------X------------*/

bool check_bin(int x, int y, int z){
    return x+y>z and y+z>x and x+z>y;
}
void crack()
{
     int x;
     cin >> x;
     int l=1,r=x-1;
     while(l<=r){
        int mid = (l+r)/2;
        if(check_bin(x,mid,x^mid)){
            cout<<mid<<endl;
            return;
        }
        if(x+mid>x^mid)l=mid+1;
        else r = mid-1;
     }
     cout<<-1<<endl;
}

int32_t main()
{
    faf auto st = clock();
    test
    {
        //cout << "Case " << ++tc << ": ";
        crack();
    }
    //cerr << 1.0 * (clock() - st) / CLOCKS_PER_SEC << endl;
    return 0;
}