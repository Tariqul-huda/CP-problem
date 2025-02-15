#include "bits/stdc++.h"
using namespace std;
#define int long long
#define OR ||
#define AND &&
bool palindrome(int n)
{
     int num_bits = log2(n)+1;
    // for(int shift = 0,shift_reverse = num_bits-1;shift<=num_bits/2;shift++,shift_reverse--)
    // {
    //     if((n&(1<<shift)) != (n&(1<<shift_reverse)))
    //     {
    //         return false;
    //     }
    // }
    if(n&1<<(num_bits-1)!=0 && n&1) return true;
    return false;
}
bool palindrome_reborn(int n)
{
    bitset<32>a = n;
    string s,t;
    s = a.to_string();
    int num_bits = log2(n)+1;
    for(int i=0;i<=num_bits/2;i++)
    {
        if(s[i]!=s[num_bits-i-1])return false;
    }
    return true;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    if(n&1 && palindrome_reborn(n))
    {
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
    return 0;
}