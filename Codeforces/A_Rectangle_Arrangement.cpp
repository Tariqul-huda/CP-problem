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


void crack()
{
     

        int sizee;
        cin >> sizee;
        int height[sizee];
        int widht[sizee];
        pair<int,int>max_height,max_width;
        max_height.first = max_width.first=INT_MIN;
        for(int i=0;i<sizee;i++){
            int h,w;
            cin >> h >> w;
            if(h>max_height.first){
                max_height.first = h;
                max_height.second = w;
            }
            if(w>max_width.first){
                max_width.first = w;
                max_width.second = h;
            }
            
        }
     int ans = max_height.first + max_height.second + (max_height.first-max_width.second)+(max_width.first-max_height.second)+max_width.second+max_width.first;
     cout<<ans<<endl;
        
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