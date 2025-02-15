#include <bits/stdc++.h>
using namespace std;

// @author : tariq002

#define endl '\n'
#define int long long
/*------------X------------*/
const int N = 1e5 + 5;

void print(vector<bool> &a,int s){
    for(int i=1;i<=s;i++)cout<< a[i]<<endl;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    int s, b;
    while (cin >> s >> b and s and b)
    {
        vector<bool> a(N,false);
        // memset(a,N,0);
       

        // print(a,s);
        int l, r;
        for (int i = 0; i < b; i++)
        {
            
            cin >> l >> r;
            for (int j = l; j <= r; j++)
                a[j] = true;
            
            bool is_left = false;
            bool is_right = false;
            for (int j = 1; j < l; j++)
            {
                if (!a[j])
                {
                    cout << j << " ";
                    is_left = true;
                    break;
                }
            }
            if (!is_left)
                cout << "* ";
            for (int j = r + 1; j <= s; j++)
            {
                if (!a[j])
                {
                    cout << j << " "<<endl;
                    is_right = true;
                    break;
                }
            }
            if (!is_right)
                cout << "*" << endl;
        }

        cout << '-'<<endl;
    }

    return 0;
}