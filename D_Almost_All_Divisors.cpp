#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int &i:a)cin>>i;
        sort(a.begin(),a.end());
        int original_number = a[0] *a[n-1];
        vector<int>b;
        for(int i =2;i*i<=original_number;i++){
            if(original_number%i==0){
                b.push_back(i);
                if(original_number/i !=i)b.push_back(original_number/i);
            }
        }
        sort(b.begin(),b.end());
        if(a==b)cout<<original_number<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}