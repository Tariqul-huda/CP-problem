#include<iostream>
using namespace std;

int recursion(int *a,int n,int pos)
{
    if(pos==n-1)return a[pos];
    int value = recursion(a,n,pos+1);
    return ((a[pos]>value)?a[pos]:value);

}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    cout<<recursion(a,n,0)<<endl;
}