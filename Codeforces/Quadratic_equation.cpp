#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    int check_root = b*b-4*a*c;
    if(check_root<0)cout<<"No roots"<<endl;
    else
    {
    int x1 = (-b+sqrt(check_root))/(2*a);
    int x2 = (-b-sqrt(check_root))/(2*a);
    if(x1==x2)
    {
        cout<<"One root: "<<x1<<endl;
    }
    else{
        cout<<"Two roots: "<<min(x1,x2)<<" "<<max(x1,x2)<<endl;
    }

    }
    return 0;
}