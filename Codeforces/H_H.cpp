#include "bits/stdc++.h"
#include<ios>
using namespace std;
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
#define mod 1e9 + 7
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++)
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--)
#define INF 1000000000000000003
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define POB pop_back
#define MP make_pair
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    cin.sync();
    cin>>ws;
    unordered_map<char,int>dict;
    while (T--) {
        
    for(int i=97;i<=122;i++)
    {
        dict[(char)i]=0;
    }

        bool flag= false;
        string c;

        getline(cin,c);
        
        for(int i=0;i<c.size();i++)
        {
            dict[tolower(c[i])]++;
        }
        for(char a='a';a<='z';a++)
        {
        if(dict[a]==0)
        {
            flag = true;
            break;
        }
        }
        if(flag)
        {
            cout<<"missing ";
            for(char a = 'a';a<='z';a++)
            {
                if(dict[a]==0)
                cout<<a;
            }
            cout<<endl;

        }
        else
        cout<<"pangram"<<endl;
    }
    return 0;
}