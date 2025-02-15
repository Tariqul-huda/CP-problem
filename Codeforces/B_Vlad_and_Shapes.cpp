#include "bits/stdc++.h"
using namespace std;
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
#define mod 1e9 + 7
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++)
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--)
#define INF 1000000000000000003
#define int long long
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define POB pop_back
#define MP make_pair
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin>>n;
        //int arr[n][n];
        map<int,int>mp;
        bool pais = false;
        for(int i=1;i<=n;i++)
        {
            string s;
            cin>>s;
            
            mp[i]=count(s.begin(),s.end(),'1');
            

        }
        
    
        set<int>temp;
        
        for(auto i:mp)
        temp.insert(i.second);
        if(temp.size()>2)
        cout<<"TRIANGLE"<<endl;
        else
        cout<<"SQUARE"<<endl;




        // for(int i=0;i<n;i++)
        // {
        //     for(int j=0;j<n;j++)
        //     {
        //         cin>>arr[i][j];
        //     }
        // }
        // for(int i=0;i<n;i++)
        // {
        // for(int j=0;j<n;j++)
        // {
        // cout<<arr[i][j]<<" ";

        // }
        // cout<<endl;

        // }
        // int count_row = 0;
        // int first_row=0;
        // int first_col = 0;
        // bool first = false;
        // for(int i = 0;i<n;i++)
        // {
        //     for(int j=0;j<n;j++)
        //     {
        //         if(arr[i][j])
        //         {
        //             first_row = i;
        //             first_col  = j;
        //             cout<<'s'<<endl;
        //             cout<<j<<endl;
        //             first = true;
        //         }
        //         break;


        //     }
        //     if(first)
        //     break;
        // }
        
        //     for(int j = first_col;j<n;j++)
        //     {
            
        //         if(arr[first_row][j])
        //         count_row++;
        //     }
        //     cout<<first_row<<" "<<first_col<<endl;
        //     int count_last = 0;
        //     for(int i=first_col;i<n;i++)
        //     {
        //         if(arr[first_row+1][i])
        //         count_last++;
                
        //     }
        //     // if(count_row !=count_last)
        //     // cout<<"Triangle"<<endl;
        //     // else
        //     // cout<<"square"<<endl;

        

    }
    return 0;
}