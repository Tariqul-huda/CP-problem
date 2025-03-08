#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n, pain;
        cin >> n >> pain;
        priority_queue<int>pq;
        for(int i =0;i<n;i++){
            int x;
            cin >> x;
            pq.push(x);
        }
        int cnt = 0;
   
        while(!pq.empty() and pain>0){
            int power = pq.top();
            pain-=power;
            
            pq.pop();
            if(power)
            pq.push((power>>1));
            cnt++;
        }
        if(pain>0){
            cout<<"Evacuate"<<endl;
        }
        else{
            cout<<cnt<<endl;
        }
    }

}
