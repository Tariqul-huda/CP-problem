#include "bits/stdc++.h"
using namespace std;
#define int long long
#define OR ||
#define AND &&
bool is_found;
void current_recursion(int target,int current)
{
    if(current>target)return;
    else if(current == target){is_found = true;return;}
    current_recursion(target , current*10);
    current_recursion(target,current*20);
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--) {
        is_found = false;
      int target;
        cin >> target;
    current_recursion(target,1);
    if(is_found)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }
    return 0;
}