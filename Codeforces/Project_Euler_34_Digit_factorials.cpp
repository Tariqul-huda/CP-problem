#include<bits/stdc++.h>
using namespace std;
int main()
{
    int prefact[10];
    prefact[0]=1,prefact[1]=1;

    for(int i=2;i<10;i++)
    {
        prefact[i]=prefact[i-1]*i;
    }
    //for(int i=0;i<10;i++) cout<<prefact[i]<<endl;
    int t;
    cin >> t;
    int sum2 = 0;
    for(int i=10;i<t;i++)
    {
    string s = to_string(i);
    int sum = 0;
    for(int i=0;i<s.size();i++)
    {
     sum+=prefact[s[i]-'0'];
    }
    if(sum%i==0)//cout<<i<<endl;
    sum2+=i;
    }
    cout<<sum2<<endl;
    // int n; cin >> n;
    // if(n>=19)
    // cout<<19<<endl;
    // else cout<<0<<endl;


    return 0;
}