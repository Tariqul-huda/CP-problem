#include<iostream>
using namespace std;
int main()
{
    string s,t;
    cin>>s>>t;
    cout<<s.size()<<" "<<t.size()<<endl;
    cout<<(s+t)<<endl;
    swap(s[0],t[0]);
    cout<<s<<" "<<t<<endl;
    return 0;}