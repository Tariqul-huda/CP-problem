#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++)cout<<a[i]<< " "; 
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int maxx = INT_MIN;
                for(int k=i;k<=j;k++)
                {
                    if(maxx<a[k])
                    maxx = a[k];
                }
                cout<<maxx<<" ";
            }
        }
        cout<<endl;

    }
    return 0;
}