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
     int a[n];
     for(int &i:a)cin>>i;
     int loop_count = 0;
     if(n==1)cout<<0<<endl;
     else if(n==2){
        if(a[0]>=a[1])cout<<0<<endl;
        else cout<<1<<endl;
     }
     else{
        set<int>ss;
     int first_max = INT_MIN;
     int first_max_idx = 1;
     int i;
     while(first_max_idx<n){
     for(i=first_max_idx;i<n;i++){
        if(a[i]<=a[i-1]){
            first_max = a[i-1];
            first_max_idx = i-1;
            break;
        }
     }
     int found_bigg = 0;
    for(int i=first_max_idx+1;i<n;i++){
        if(first_max<a[i])found_bigg++;
    }

    int ans = first_max_idx+found_bigg;
    first_max_idx = i+1;

    ss.insert(ans);
//    cout<<first_max_idx<<endl;
//        if(loop_count>10)break;
//        loop_count++;
     }
//    ss.insert(ans);
    cout<<*ss.begin()<<endl;

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
