#include<bits/stdc++.h>
using namespace std;

    // @author : tariq002

#define endl '\n'
#define int long long
/*------------X------------*/

signed main()
{
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    vector<int>ab = {1,2,3,4,5,6,7,8,9,10,11,12,13};
    map<pair<int,int>,int>mp;
    do{
        int left = 0,right = 12;
        while(ab[left]<ab[left+1] and left+1<13)left++;
        while(ab[right]<ab[right-1] and right-1>=0)right--;
        mp[{left,right}]++;
    }while(next_permutation(ab.begin(),ab.end()));
    

    return 0;
}