#include<bits/stdc++.h>
#define int long long
using namespace std;
int similarSets(int a, int b){ 
int count  = 0;
for(int i = 0; i<= 20; i++)
{
if(((a >> i) & 1 ) == ((b >> i) & 1 )) count ++;
}
 return count;
}
int32_t main()
{
    vector<pair<int,int>>v;
    int n,m;
    cin>>n>>m;
    int a[n];
    bitset<20>b;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        a[i] = x;
        b=x;
        b.count();
        v.push_back({b.count(),x});
    }
    sort(v.begin(),v.end());
       bitset<20>c,d;
    for(int i=1;i<=m;i++)
    {
        set<int>res;
        int x;
        cin>>x;
        d = x;
        for(auto i:v)
        {
            c = i.second;
        


        }

    }
    

}