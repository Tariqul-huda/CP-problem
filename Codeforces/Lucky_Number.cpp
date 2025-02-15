// Splay Order Statistics Tree
// https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1850

#include<bits/stdc++.h>

using namespace std;

const int N = 2000001;



int lucky[N], size;
int dp[N], n;

int main() {
    set<int> nums;
	ios::sync_with_stdio(false);
	cin.tie(0);
	for (int i = 1; i < N; i += 2) {
		nums.insert(i);
	}
	for (set<int>::iterator it = ++nums.begin(); it != nums.end(); ++it) {
		int strike = *it;
		if (strike > nums.size()) break;
		for (int j = strike - 1; j < nums.size(); j += strike - 1) {
			nums.erase(nums.find(j));
		}
	}
	for (set<int>::iterator it = nums.begin(); it != nums.end(); ++it)
		lucky[*it] = 1;
	while (cin >> n) {
		if (n & 1)
			cout << n << " is not the sum of two luckies!\n";
		else {
			if (!dp[n]) {
				dp[n] = -1;
				for (int i = n / 2; i >= 1; --i) {
					if (lucky[i] && lucky[n - i]) {
						dp[n] = i;
						break;
					}
				}
			}
			if (dp[n] == -1) {
				cout << n << " is not the sum of two luckies!\n";
			}
			else {
				cout << n << " is the sum of " << dp[n] << " and " << n - dp[n] << ".\n";
			}
		}
	}
    for(auto i:nums)cout<<i<<endl;
    cout<<nums.size()<<endl;
	cout << flush;
}