#include<bits/stdc++.h>
using namespace std;

    // @author : tariq002

#define endl '\n'
#define int long long
/*------------X------------*/
void solve(vector<int>arr){
    int n = arr.size();
    for(int i=0;i<=n-6;i++){
        for(int j = i+1;j<=n-5;j++){
            for(int k = j+1;k<=n-4;k++){
                for(int l = k+1;l<=n-3;l++){
                    for(int m = l+1;m<=n-2;m++){
                        for(int f = m+1;f<=n-1;f++){
                            cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<" "<<arr[l]<<" "<<arr[m]<<" "<<arr[f]<<endl;
                        }
                    }
                }
            }
        }
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);

    int n;
    vector<vector<int>>input;
    int cnt = 0;
    while(1){
        cin >> n;
        if(!n)break;
        cnt++;
        vector<int>temp;
        for(int i =0;i<n;i++){
            int x;
            cin >> x;
             temp.push_back(x);
        }
        input.push_back(temp);
    }
    for(int i =0;i<cnt;i++){
        solve(input[i]);
        if(i+1<cnt)
        cout<<endl;
    }

    return 0;
}