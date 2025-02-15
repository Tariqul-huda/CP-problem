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
bool leap_year(long long year){
    return ( (year%100!=0 &&year%4==0) || (year%400==0));

}

void crack()
{
    int first,second;
    cin>> first>>second;
    
    long long sum = (second-first+1)*52;
    long long cc = 0;
    bool skip = false;
    int first_leap = 0;
    while(first<=second){
            //cerr<<first<<endl;
        if(leap_year(first)){
            first_leap = first;
            break;
        }
       first++;

        }
        int ansss = (second/4)-((first_leap-1)/4);
    if(!first_leap)cout<<sum<<endl;
    else cout<<sum+1+ansss<<endl;
    
   // cerr<<cc<<endl;
    // sum-=cc;
    // cout<<sum<<endl;

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