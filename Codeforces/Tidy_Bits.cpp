#include<bits/stdc++.h>
using namespace std;

int count_bit(int n)
{
    int r = 0;
    while(n)
    {
        if(n&1)r++;
        n>>=1;
    }
    return r;
}
int main()
{
    int n;
    cin>> n;
    int cc = count_bit(n);
    cout<<((cc==0)?0:(1<<cc)-1)<<endl;
    return 0;
}