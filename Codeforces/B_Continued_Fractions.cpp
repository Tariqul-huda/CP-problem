#include<bits/stdc++.h>
#define int long long
using namespace std;

void EA(int a, int b,vector<int>&result)
{

    if((a%b==0))
    {
        result.push_back(a/b);
        //result.push_back(b);
        return;
    }
    else
    {
        result.push_back(a/b);
    }
    EA(b,a%b,result);
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
   // freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int num, den;
    cin >> num >> den;

    vector<int>result;
    EA(num,den,result);
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    vector<int> result2;
    result2 = result;
    result2[result.size()-1]--;
    result2.push_back(1);
    if(a == result  || a == result2)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }


    return 0;
}
