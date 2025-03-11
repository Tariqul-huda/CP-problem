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
    priority_queue<int>arr;
    for(int i =0;i<n;i++){
        int x;
        cin >> x;
        arr.push(-x);
    }
    
    while(arr.size()>1){
        int a = -arr.top();
        arr.pop();
        int b = -arr.top();
        arr.pop();
        int c = (a+b)-1;
        arr.push(-c);
        
    }
    cout<<-arr.top()<<endl;


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