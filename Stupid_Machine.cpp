#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int arr[n];
	    for(int &i:arr)cin >> i;
	    int min_arr[n];
	    min_arr[0] = arr[0];
	    for(int i =1;i<n;i++)min_arr[i] = min(min_arr[i-1],arr[i]);
        
	    int idx = 0;
        for(;idx<n;idx++){
            if(min_arr[idx]==min_arr[n-1])break;
        }
	    
	    int needed = min_arr[idx] *(n-idx);
        for(int i =0;i<idx;i++)needed+=min_arr[i];
        cout<<needed<<endl;


	    
	}
    return 0;

}
