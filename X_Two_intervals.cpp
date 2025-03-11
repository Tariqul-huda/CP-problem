#include<bits/stdc++.h>

using namespace std;

int main(){
    pair<int,int>a,b;
    cin>> a.first >> a.second >> b.first >> b.second;
    if(a.second< b.first or b.second < a.first){
        cout<<-1<<endl;
        return 0;
    }
    else{
        int l1 = max(a.first,b.first);
        int r1 = min(a.second,b.second);
        cout<<l1<< " "<<r1<<endl; 
    }

    return 0;
}