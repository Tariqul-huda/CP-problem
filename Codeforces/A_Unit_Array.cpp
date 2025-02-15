#include "bits/stdc++.h"
using namespace std;
#define int long long
#define OR ||
#define AND &&
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        map<int, int> mp;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            sum += x;
            mp[x]++;
        }
        int result = 0;
        int cnt = 0;
        if (mp[-1] % 2)
        {
            mp[-1]--;
            mp[1]++;
            result = mp[1] - mp[-1];
            cnt++;
            if (result >= 0)
            {
                cout << cnt << endl;
            }
            else
            {
                while (result < 0)
                {
                    mp[-1] -= 2;
                    mp[1] += 2;
                    result = mp[1] - mp[-1];
                    cnt += 2;
                }
                cout<<cnt<<endl;
            }
        }
        else if (!(mp[-1] % 2) && mp[-1])
        {
            result = mp[1] - mp[-1];
            if (result >= 0)
            {
                cout << cnt << endl;
            }
            else
            {
                while (result < 0)
                {
                    mp[-1] -= 2;
                    mp[1] += 2;
                    result = mp[1] - mp[-1];
                    cnt += 2;
                }
                cout<<cnt<<endl;
            }
        }
        else
        {
            cout<<0<<endl;
        }
    }
    return 0;
}