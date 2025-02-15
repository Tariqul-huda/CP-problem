#include<bits/stdc++.h>

using namespace std;
int main()
{
vector<long long>ab;
int n; cin >> n;
for(int i=0;i<n;i++){
long long x;
cin >> x;
ab.push_back(x);
}

sort(ab.begin(),ab.end());
for(auto i:ab)cout<<i<<" ";
return 0;
}
