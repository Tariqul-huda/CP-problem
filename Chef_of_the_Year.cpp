#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	map<string, int>chef,country;
	map<string,string>chef_to_country;
	int n,m;
	cin >> n >> m;
	while(n--){
	    string s,t;
	    cin >> s >> t;
	    chef_to_country[s]= t;
	}
	int maxx = INT_MIN;
	int maxx_c = INT_MIN;

	while(m--){
	    string s;
	    cin >> s;
	    chef[s]++;
	    country[chef_to_country[s]]++;
	    maxx = max(country[chef_to_country[s]],maxx);
	    maxx_c = max(maxx_c, chef[s]);
	}
	string ans_c,ans_co;
	for(auto i:chef){
	    if(i.second == maxx_c){
	        ans_c = i.first;
	        break;
	    }
	}
	for(auto i:country){
	    if(i.second == maxx){
	        ans_co = i.first;
            break;
	    }
	}
	cout<<ans_co<< endl<<ans_c<<endl;
	
	

}
