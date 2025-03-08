#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
	vector<int>arr(n);
	int cnt = 0;
	for(int &i:arr)cin >> i;
	for(int i =0;i<n;i++){
	    for(int j =i-1;j>=0;j--){
	        if(arr[i] < arr[j])cnt++;
	    }
	}
	cout<<cnt<<endl;

}
