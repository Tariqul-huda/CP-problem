#include<bits/stdc++.h>
using namespace std;

    // @author : tariq002

#define endl '\n'
#define int long long
/*------------X------------*/

signed main()
{
    ios_base::sync_with_stdio(false);

    int n;
    cin>>n;
    int arr[n];
    int freq[7] = {0};
    set<int>ab;
    for(int i =0;i<n;i++){
        cin >> arr[i];
        freq[arr[i]]++;
        ab.insert(arr[i]);
    }
    int maxx = -1;
    
    for(auto it = ab.rbegin();it!=ab.rend();it++){
            if(freq[*it]==1){
                maxx = *it;
                break;
            }
    }
    if(maxx == -1)cout<<"none"<<endl;
    else{
        for(int i =0;i<n;i++){
            if(maxx == arr[i]){
                cout<<i+1<<endl;
                return 0;
            }
        }
    }


    return 0;
}