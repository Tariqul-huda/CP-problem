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
bool prime[1003];
void sieve(){
    prime[0] = true, prime[1] = true;
    for(int i = 2;i<=1000;i++){
        if(!prime[i]){
            for(int j = i*2;j<=1000;j+=i){
                prime[j]=true;
            }

        }
    }
}
int phi(int n){
    int p,q;
    if(n%2==0){
        if(!prime[n/2]){
            return (n/2)-1;
        }
    }
    for(int i =3;i<=1000;i+=2){
        if( (n%i==0) ){
           
            if(!prime[i] and !prime[n/i]){
                
                return (i-1)*((n/i)-1);
            }
        }
    }
    return -1;
}
void crack()
{
    int n,e;
    cin >> n >> e;
     int r = phi(n);
    //  cerr<<!prime[11]<<endl;
    //  cerr<<r<<endl;
     for(int i =2;i<r;i++){
        if((i*e)%r==1){
            cout<<i<<endl;
            return;
        }
     }
}

int32_t main()
{
    sieve();
    faf auto st = clock();
    test
    {
        //cout << "Case " << ++tc << ": ";
        crack();
    }
    //cerr << 1.0 * (clock() - st) / CLOCKS_PER_SEC << endl;
    return 0;
}