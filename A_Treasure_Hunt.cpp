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

bool ans(int a, int mid,int x, int y){
    if(mid&1){
        return (y*(mid/2))+(x*(mid-(mid/2)))>=a;
    }
    else{
        return (y*(mid/2)) + (x*(mid/2))>=a;
    }
}

void crack()
{
    int x,y,a;
    cin >> x >> y >> a;
    a++;
   
    int anss = -1;
    int l = 1,r = 1e9;
    while(l<=r){
        int mid = (l+r)/2;
        if(ans(a,mid,x,y)){
            anss = mid;
           
            r = mid-1;
        } 
        else l = mid+1;
    }
    
    if(anss&1)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
     
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