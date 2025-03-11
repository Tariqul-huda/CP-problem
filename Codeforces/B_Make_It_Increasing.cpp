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
     for(int &i:arr)cin >> i;
     int cnt = 0;
     for(int i =n-2;i>=0;i--){
        while(arr[i]>=arr[i+1] and arr[i]){
            arr[i]>>=1;
            cnt++;
  
        }
        if(arr[i] == arr[i+1]){
           cout<<-1<<endl;
           return;
           
        }
     }
     cout<<cnt<<endl;
 
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