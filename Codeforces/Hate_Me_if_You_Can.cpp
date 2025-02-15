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

int calculate_ball(int x){
    int ans1 = x/6;
    int ans2 = (x%6==5 or x%6 == 4)?2:(x%6!=0);
    return ans1+ans2;
}
void crack()
{
    int x, y, z;
    cin >> x >> y >> z;
    int for_y = calculate_ball(y);
    int for_z = calculate_ball(z);
    if(x>= for_z and x>=for_y and y>z){
        cout<<"Like a Boss!"<<endl;
    }
    else if(x>=for_y){
        cout<<"Bravo Captain!"<<endl;
    }
    else{
        cout<<"Love You Captain!"<<endl;
    }


}

int32_t main()
{
    faf auto st = clock();
    test
    {
        cout << "Case " << ++tc << ": ";
        crack();
    }
    //cerr << 1.0 * (clock() - st) / CLOCKS_PER_SEC << endl;
    return 0;
}