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
    int k = 0;
    vector<int>ar(n);
    for(int &i:ar)cin>> i;
        bool found = false;
    while(k<n){
        vector<int>temp = ar;
        int i =k;
        do{
        int temp2 = min(temp[i],temp[(i+1)]);
            temp[i]-=temp2;
            temp[(i+1)]-=temp2;
            i++;
            if(i==n)i=0;
            cerr<<k<<endl;
        }while(i!=k);
        set<int>ab;
        for(int i = 0;i<temp.size();i++)ab.insert(temp[i]);
        
        if(ab.size()<=2){
            cout<<"YES"<<endl;
            found = true;
            break;
        }
        k++;
        if(found)break;
    }
    if(!found)
    cout<<"NO"<<endl;

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
