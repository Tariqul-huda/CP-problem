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
    vector<int>ab;
    int minn = INT_MAX;
    ab.push_back(1);
    for(int i=0;i<n-1;i++){
        int x;
        cin >> x;
        if(x==1){
            ab.push_back(ab[ab.size()-1]+1);
            minn = min(ab[ab.size()-1],minn);
        }
       else if(x==2){
            ab.push_back(ab[ab.size()-1]-1);
            minn = min(ab[ab.size()-1],minn);
        }
        else if(x==0){
            ab.push_back(ab[ab.size()-1]);
        }
    }
    if(minn<=0){
        minn = abs(minn)+1;
        for(int i=0;i<ab.size();i++){
            ab[i]+=minn;
        }
    }
    for(int i:ab)cout<<i<<" ";
    cout<<endl;
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