#include<bits/stdc++.h>
using namespace std;

    // @author : tariq002

#define endl '\n'
#define int long long
/*------------X------------*/

signed main()
{
    ios_base::sync_with_stdio(false);

    int n,m;
    cin >> n >> m;
    char arr[n][m];
    int car_crash[5] = {0};
    for(int i =0;i<n;i++)for(int j=0;j<m;j++)cin>>arr[i][j];
    for(int i=0;i<n;i++){
        for(int j =0;j<m;j++){
            bool building = false;
            int cnt = 0;
           for(int k = j;k-j<2 and k<n;k++){
            for(int l = k;l-k<2 and l<m;l++){
                if(arr[k][l]=='#'){
                    building = true;
                    break;
                }
                else if(arr[k][l]=='X'){
                    cnt++;
                }
            }
            if(building)break;
        }
        if(!building)
        car_crash[cnt]++;
        }
    }
    cout<<car_crash[0]<<endl;
    cout<<car_crash[1]<<endl;
    cout<<car_crash[2]<<endl;
    cout<<car_crash[3]<<endl;
    cout<<car_crash[4]<<endl;

    return 0;
}
/*

#..#
..X.
..X.
#XX#


*/
