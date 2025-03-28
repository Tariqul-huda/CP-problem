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
     cin >>n;
     vector<int> ab = {0,0,0,1,2,2,3,5};
    
     int arr[n+1];
     for(int i=1;i<=n;i++)cin>>arr[i];
     int cnt = 0;
    //  sort(arr,arr+n+1);
     int i;
     for( i =1;i<=n;i++){
         if(find(ab.begin(),ab.end(),arr[i])!=ab.end()){
             ab.erase(find(ab.begin(),ab.end(),arr[i]));
             
            }
            if(!ab.size())break;
     }
    //  cout<<ab.size()<<endl;
     if(ab.size()>0)cout<<0<<endl;
     else
     cout<<i<<endl;



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