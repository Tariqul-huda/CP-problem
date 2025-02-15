#include<bits/stdc++.h>
using namespace std;

    // @author : tariq002

#define test  \
    int T, tc = 0;    \
    cin >> T; \
    while (T--)
#define faf ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define endl '\n'

/*------------X------------*/
struct Time{
    int h,m;
};
struct RangeTime{
    Time s,e;
};
void get_input(RangeTime &office){

    cin >> office.s.h;
    cin.ignore(1,':');
    cin>>office.s.m;
    cin >> office.e.h;
    cin.ignore(1,':');
    cin>>office.e.m;
}
void crack()
{
    RangeTime office,marry;
    get_input(office);
    get_input(marry);
    cout<<office.s.h<<":"<<office.s.m<<" "<<office.e.h<<":"<<office.e.m<<endl;
    cout<<marry.s.h<<":"<<marry.s.m<<" "<<marry.e.h<<":"<<marry.e.m<<endl;

    
    
    
     
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