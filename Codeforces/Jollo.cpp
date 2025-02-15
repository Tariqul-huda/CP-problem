#include<bits/stdc++.h>
using namespace std;

    // @author : tariq002

#define endl '\n'
#define int long long
/*------------X------------*/

signed main()
{
    ios_base::sync_with_stdio(false);

    int a,b,c,x,y;
    while(cin >> a >> b >> c >> x >> y and x){
        int prn_max = max({a,b,c});
        int prn_min = min({a,b,c});
        int prn_mid = (a+b+c)-(prn_max+prn_min);
        int pr_max = max(x,y);
        int pr_mid = min(x,y);
        if((pr_mid <prn_mid or pr_mid < prn_min) and pr_max<prn_max){
            cout<<-1<<endl;
        }
        else{
            int ans = prn_min+1;
            while(ans<=52){
                if(ans == prn_max or ans ==prn_min or ans == prn_mid or ans ==pr_max or ans==pr_mid)
                ans++;
                else{
                if(ans<prn_min or ans<prn_mid)ans++;
                else break;
                }
            }
            cout<<ans<<endl;
        }

    }

    return 0;
}