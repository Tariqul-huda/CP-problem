#include "bits/stdc++.h"
using namespace std;
#define int long long
#define endl '\n'
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
      int n;
      cin >> n;
      deque<int>ab;
      for(int i = 0;i<n;i++){
        int x;
        cin >> x;
        ab.push_back(x);
      }
      int maysha = 0;
      int bear = 0;
      while(!ab.empty()){

        if(ab.size()>=2){
            maysha+=(ab[0]+ab[1]);
            ab.pop_front();
            ab.pop_front();
        }
        else{
            maysha+=(ab[0]);
            ab.pop_front();
        }
        if(ab.size()>=2 and ab.size()){
            bear +=(ab[ab.size()-1]+ab[ab.size()-2]);
            //ab.erase(ab.begin()+(ab.size()-2),ab.end());
             ab.pop_back();
           ab.pop_back();
           

        }
        else if(ab.size()){
           bear +=(ab[ab.size()-1]);
           //ab.erase(ab.begin()+(ab.size()-1));
         ab.pop_back();
          
        }
      

       //cout<<maysha<<endl;
        
      }
      if(maysha==bear)cout<<"Draw"<<endl;
      else
      cout<<((maysha>bear)?"Masha":"The Bear")<<endl;
    }
    return 0;
}