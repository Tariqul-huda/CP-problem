#include<bits/stdc++.h>
using namespace std;

    // @author : tariq002

#define test  \
    int T, tc = 0;    \
    cin >> T; \
    while (T--)
#define faf ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define endl '\n'
#define int long long
/*------------X------------*/


void crack()
{
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    
    int sum_a_even = 0, sum_a_odd = 0;
    int sum_b_even = 0, sum_b_odd = 0;
    
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            sum_a_even += (a[i] == '1');
            sum_b_even += (b[i] == '1');
        } else {
            sum_a_odd += (a[i] == '1');
            sum_b_odd += (b[i] == '1');
        }
    }
    
    int sum1 = sum_a_even + sum_b_odd;
    int sum2 = sum_a_odd + sum_b_even;
    int group1_b = n / 2;
    int group2_b = (n + 1) / 2;
    
    if (sum1 <= group1_b && sum2 <= group2_b) {
        cout << "YES"<<endl;
    } else {
        cout << "NO"<<endl;
    }
}


int32_t main()
{
    faf auto st = clock();
    test
    {
        //cout << "Case " << ++tc << ": ";
        crack();
    }
    //cerr << 1.0 * (clock() - st) / CLOCKS_PER_SEC << endl;
    return 0;
}