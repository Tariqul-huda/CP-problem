#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n, m;
	cin >> n >> m;
	vector<pair<int,int>>vp;
	set<int>temp;
	int a[n],b[m];
	for(int i =0;i<n;i++){
	    cin >> a[i];
	}
	for(int &i:b)cin >> i;
   int cnt = 0;
	for(int i =0;i<n and cnt!=n+m-1;i++){
	    for(int j = 0;j<m;j++){
	        if(temp.insert(a[i]+b[j]).second){
                vp.push_back({i,j});
                cnt++;
            }

	    }
	}
    for(auto i:vp){
        cout<<i.first<< " "<<i.second<<endl;
    }
	

}
