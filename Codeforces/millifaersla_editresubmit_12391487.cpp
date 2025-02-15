#include<bits/stdc++.h>
long long min(long long a, long long b)
{
    return (a<b)?a:b;
}
int main()
{
    long long a,b,c;
    std::cin>>a>>b>>c;
    long long minn = min(min(a,b),c) ;
    if(minn==a)
    std::cout<<"Monnei"<<std::endl;
    else if(minn==b)
    std::cout<<"Fjee"<<std::endl;
    else
    std::cout<<"Dolladollabilljoll"<<std::endl;
    return 0;
}