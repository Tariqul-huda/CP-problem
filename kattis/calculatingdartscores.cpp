#include<bits/stdc++.h>
using namespace std;

    // @author : tariq002

#define endl '\n'
#define int long long
/*------------X------------*/

signed main()
{
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;
    bool found = false;
    map<int,string>mp ;
    mp[1]="single";
    mp[2] = "double";
    mp[3] = "triple";
    for(int a=0;a<=20;a++){
        for(int b = 0;b<=20;b++){
            for(int c = 0;c<=20;c++){
                for(int i=1;i<=3;i++){
                    for(int j = 1;j<=3;j++){
                        for(int k = 1;k<=3;k++){
                            if(a*i+b*j+c*k==n){
                                if(a and b and c==0){
                                    cout<<mp[i]<<" "<<a<<endl;
                                    cout<<mp[j]<<" "<<b<<endl;
                                }
                                else if(b and c and a==0){
                                    cout<<mp[j]<<" "<<b<<endl;
                                    cout<<mp[k]<<" "<<c<<endl;
                                }   
                                else if(a and c and b ==0){
                                    cout<<mp[i]<<" "<<a<<endl;
                                    cout<<mp[k]<<" " <<c<<endl;
                                }   
                                else if(!a and !b and c)cout<<mp[k]<<" "<<c<<endl;
                                else if(a and !b and !c)cout<<mp[i]<<" "<<a<<endl;
                                else if(!a and b and !c)cout<<mp[j]<<" "<<b<<endl;
                                else cout<<mp[i]<<" "<<a<<endl<<mp[j]<<" "<<b<<endl<<mp[k]<<" "<<c<<endl;
                                found = true;
                                return 0;
                            }
                        }
                    }
                }
            }
        }
    }
    cout<<"impossible"<<endl;

    return 0;
}