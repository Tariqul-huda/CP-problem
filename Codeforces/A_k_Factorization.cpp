
#include "bits/stdc++.h"
using namespace std;

#define MAXN 100001
vector<int> spf(MAXN + 1, 1);

void sieve()
{


    spf[0] = 0;
    for (int i = 2; i <= MAXN; i++) {
        if (spf[i] == 1) { 
            for (int j = i; j <= MAXN; j += i) {
                if (spf[j]== 1) 
                    spf[j] = i;
            }
        }
    }
}

vector<int> getFactorization(int x, int k)
{
    vector<int> ret;
    while (x != 1 and k!=1) {
        ret.push_back(spf[x]);
        x = x / spf[x];
        k--;
    }
    if(x!=1)ret.push_back(x);
    return ret;
}

int main(int argc, char const* argv[])
{

    sieve();
    int n,k;
    cin >> n >> k;
    vector<int>result = getFactorization(n,k);
    if(result.size()<k)cout<<-1<<endl;
    else for(int i =0 ;i<k;i++)cout<<result[i]<<" ";
    return 0;
}

