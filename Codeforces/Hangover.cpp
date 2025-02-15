#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    float f,sum;
    while(scanf("%f",&f) && f)
    {
        sum=0;
    int c=0;
        for(int i=1;sum<f;i++,sum+=((float)1/i),c++);
        cout<<c<<" card(s)"<<endl;
    }
    return 0;
}