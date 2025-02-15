#include "bits/stdc++.h"
using namespace std;
#define LIMIT 1000000
#define endl '\n'
    int arr[1000001];
int main()
{
    memset(arr,0,1000001);
    for(int i=1;i<=LIMIT;i++){
        for(int j=i;j<=LIMIT;j+=i){
            arr[j]++;
        }
    }
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
      int n;
      cin >> n;
      cout<<arr[n]<<endl;

    }
   
    return 0;
}