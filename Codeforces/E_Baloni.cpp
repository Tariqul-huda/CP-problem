#include<bits/stdc++.h>
using namespace std;

    // @author : tariq002

#define endl '\n'
#define int long long
/*------------X------------*/
const int N = 1e6+7;
int a[N];

signed main()
{
    
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
       
    }
   // sort(a,a+n,greater<int>());
    int arrow = 0;
    for(int i=0;i<n;i++){
        if(a[i]>0){
        int h = a[i]-1;
        for(int j=i+1;j<n;j++){
            if(a[j]==h and a[j]>0){
                a[j]=-100;
                h--;
            }
        }
        arrow++;
        }

    }
    cout<<arrow<<endl;


    return 0;
}