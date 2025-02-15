#include "bits/stdc++.h"
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
// int points(int row,int col)
// {
//     int mp[11][11];
//     //for 1 and 10 row
//     for(int i=1;i<=10;i++)
//     {
//         mp[1][i]=1;
//         mp[10][i]=1;
//     }
//     //column wise

//     for(int i=1;i<=10;i++)
//     {
//         mp[i][1]=mp[i][10]=1;
//     }
//     //for 2nd row
//     for(int i=2;i<=9;i++)
//     {
//         mp[2][i]=mp[9][i]=2;
//         mp[i][2]=mp[i][9]=2;
//     }
//     for(int i=3;i<=8;i++)
//     {
//         mp[3][i]=mp[8][i]=3;
//         mp[i][3]=mp[i][8]=3;
//     }

//     for(int i=4;i<=7;i++)
//     {
//         mp[4][i]=mp[7][i]=4;
//         mp[i][4]=mp[i][7]=4;
//     }
//     for(int i=5;i<=6;i++)
//     {
//         mp[5][i]=mp[6][i]=5;
//         mp[i][5]=mp[i][6]=5;
//     }

//     for(int i=1;i<=10;i++)
//     {
//         for(int j=1;j<=10;j++)
//         cout<<mp[i][j]<<" ";
//         cout<<endl;
//     }


// }
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
        int mp[11][11];
    //for 1 and 10 row
    for(int i=1;i<=10;i++)
    {
        mp[1][i]=1;
        mp[10][i]=1;
    }
    //column wise

    for(int i=1;i<=10;i++)
    {
        mp[i][1]=mp[i][10]=1;
    }
    //for 2nd row
    for(int i=2;i<=9;i++)
    {
        mp[2][i]=mp[9][i]=2;
        mp[i][2]=mp[i][9]=2;
    }
    for(int i=3;i<=8;i++)
    {
        mp[3][i]=mp[8][i]=3;
        mp[i][3]=mp[i][8]=3;
    }

    for(int i=4;i<=7;i++)
    {
        mp[4][i]=mp[7][i]=4;
        mp[i][4]=mp[i][7]=4;
    }
    for(int i=5;i<=6;i++)
    {
        mp[5][i]=mp[6][i]=5;
        mp[i][5]=mp[i][6]=5;
    }
    int T;
    cin >> T;
    while (T--) {
        char c;
        int cc = 0;
        
        for(int i=1;i<=10;i++)
        {
            for(int j=1;j<=10;j++)
            {
                cin>>c;
                if(c=='X')
                {
                    cc +=mp[i][j];
                }
            }
        }
        cout<<cc<<endl;

    }
    return 0;
}