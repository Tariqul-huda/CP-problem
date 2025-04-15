#include<bits/stdc++.h>
using namespace std;
#define N 5
bool solve(vector<int>&arr, int i,int current){
    if(i==arr.size())return current == 23;
    return solve(arr,i+1,current+arr[i]) || solve(arr,i+1,current-arr[i]) || solve(arr,i+1,current*arr[i]);
}
int main()
{
 
    while(1){
        int a, b, c, d, e;
        cin >> a >> b >> c >> d >> e;
        
        if(a == 0 && b == 0 && c == 0 && d == 0 && e == 0)
            break;
        bool found = false;
        vector<int> arr = {a,b,c,d,e};
    
        sort(arr.begin(),arr.end());
        bool dd = false;
        do{
            
            found = solve(arr,1,arr[0]);
            if(found){
                cout<<"Possible"<<endl;
                break;
            }

        }
        while(next_permutation(arr.begin(),arr.end()));
        if(!found)
        cout<<"Impossible"<<endl;


    }

    return 0;
}