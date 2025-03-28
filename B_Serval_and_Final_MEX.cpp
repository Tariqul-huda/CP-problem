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
     int n;
     cin >> n;
     int arr[n];
     for(int &i:arr)cin>>i;
     int cnt = count(arr,arr+n,0);
     vector<pair<int,int>>vp;
     if(n==cnt){
        
        int step = 0;
        if(cnt%2){
            vp.push_back({1,n/2});
            n -= (n/2);
            n++;
            vp.push_back({2,n});
            vp.push_back({1,2});


            cout<<vp.size()<<endl;
            for(auto i:vp)cout<<i.first<<" "<<i.second<<endl;
        }
        else{
             step = 3;
             vp.push_back({1,n/2});
             n = (n/2)+1;
             vp.push_back({2,n});
             vp.push_back({1,2});
             cout<<step<<endl;
             for(auto i:vp)cout<<i.first<<" "<<i.second<<endl;

        }
     }
     else{
        int last = arr[n-1];
        int step = 0;
        if(cnt == 0){
            step = 1;
            vp.push_back({1,n});

        }
        else if(last){
            vp.push_back({1,n-1});
            vp.push_back({1,2});
            step = 2;
        }
        else{
            if(cnt == 1){
                vp.push_back({n-1,n});
                n-=1;
                vp.push_back({1,n});
                step = 2;
            }
            else{
                int last;
                for(last = 0;arr[last]!=0;last++);
                if(last==0){
                    vp.push_back({1,n-2});
                    n = 3;
                    vp.push_back({n-1,n});
                    vp.push_back({1,2});
                    step = 3;
                }
                else{
                    vp.push_back({last+1,n});;
                    vp.push_back({1,last+1});
                    step = 2;
                }

            }

        }
        cout<<step<<endl;
        for(auto i:vp)cout<<i.first<<" "<<i.second<<endl;
     }
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