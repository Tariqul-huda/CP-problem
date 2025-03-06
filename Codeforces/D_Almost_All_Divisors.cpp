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
int lcm(int a, int b){
    return (a*b)/__gcd(a,b);
}
const int limit = 1e16;
void crack()
{
     int n;
     cin >> n;
     int ar[n];
     cin >> ar[0];
     
     int lcc = ar[0];
     int maxx = ar[0];
     for(int i =1;i<n;i++){
        cin >> ar[i];
        lcc = lcm(lcc,ar[i]);
        maxx = max(ar[i],maxx);
     }
     sort(ar,ar+n);
     bool found = false;
     int l,r;
     l = maxx+1, r = limit;
     int ans = -1;
     for(int i =(maxx==lcc)?lcc*2:lcc;i<=limit;i+=lcc){
        if(i%lcc==0 and (binary_search(ar,ar+n,i/lcc) or i/lcc == 1)){

           ans = i;
            found = true;
            break;
        }
     }
     if(ans<0)cout<<-1<<endl;
     else cout<<ans<<endl;



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