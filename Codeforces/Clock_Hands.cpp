#include<bits/stdc++.h>
using namespace std;

    // @author : tariq002

#define endl '\n'

/*------------X------------*/

int_fast32_t main()
{
    ios_base::sync_with_stdio(false);
    int h,m;
    while(scanf("%d:%d",&h,&m) and h){
        double ans = abs((0.5*(h*60+m))-6*m);
        printf("%.3lf\n",min(360-ans,ans));
        


    }

    return 0;
}