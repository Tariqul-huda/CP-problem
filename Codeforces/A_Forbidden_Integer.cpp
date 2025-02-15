#include "bits/stdc++.h"
using namespace std;
#define int long long
#define OR ||
#define AND &&
bool prime[101];
void sieve()
{
    prime[0]=prime[1]=true;
    for(int i=2;i<=100;i++)
    {
        if(!prime[i])
        {
            for(int j= i*2;j*j<=100;j+=i)
            prime[j] = true;
        }
    }
}
void primeFact(set<int>&a,int n)
{
    a.insert(1);
    for(int i=2;i<=100 && n>1;i++)
    {
        if(!prime[i])
        {
            while(n>1 && !(n%i))
            {
                n/=i;
                a.insert(i);
                //cout<<i<<endl;

            }

        }
    }
}
vector<int> result(int n)
{
    vector<int>rest;
                    for(int i=2;i<=100;i++)
                {
                    if(prime[i])
                    {
                        for(int j = 2;j<=100;j++)
                        {
                            if(prime[j])
                            {
                                for(int k = 2;k<=100;k++)
                                {
                                    if(prime[k])
                                    {
                                        if(i+j+k==n)
                                        {
                                            rest.push_back(i);
                                            rest.push_back(j);
                                            rest.push_back(k);
                                            return rest;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }

}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
   // sieve();
    int T;
    cin >> T;
    while (T--) {
        int n,k,x;
        vector<int>a;
        cin>>n>>k>>x;
        if(x!=1)
        {
            if(k>1)
            {
                cout<<"YES"<<endl;
                cout<<n<<endl;
            for(int i = 1;i<=n;i++)
            cout<<1<< " ";

            }
            else
            cout<<"NO"<<endl;
            cout<<endl;
        }
        else
        {
            int sizee=-1;
            int i;
            if(k<=1 || (k==2 && n%2))cout<<"NO"<<endl;
            else
            {
            if(!(n%2))
            {
                int sizee = n/2;
                cout<<"YES"<<endl;
                cout<<sizee<<endl;
                for(int i=1;i<=sizee;i++)cout<<2<<" ";
                cout<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
                sizee = (n/2);
                cout<<sizee<<endl;
                for(int i=1;i<sizee;i++)
                {
                    cout<<2<< " ";
                }
                cout<<3<<endl;

            }

            }
            
        }


    }
    return 0;
}