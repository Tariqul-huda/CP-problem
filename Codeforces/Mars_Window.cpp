#include<bits/stdc++.h>
using namespace std;

    // @author : tariq002

#define endl '\n'
#define int long long
/*------------X------------*/
struct dateTime{
    int year;
    int month;
};
signed main()
{
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<dateTime>ab;
    dateTime d;
    d.year = 2018;
    d.month = 4;
    ab.push_back(d);
    bool found = false;
    for(int i=2018;i<=10000;i++){
        if(ab.back().year==n){
            cout<<"yes"<<endl;
            found = true;
            break;
        }
        int m = ((ab.back().month+2)%13)?(ab.back().month+2)%13:((ab.back().month+2)%13)+1;
        int y = ab.back().year+2+((ab.back().month+2)/13);
        dateTime temp;

        temp.year = y;
        temp.month = m;
        ab.push_back(temp);
    }
    if(!found)cout<<"no"<<endl;
    
    

    return 0;
}