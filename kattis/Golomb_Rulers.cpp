#include<bits/stdc++.h>

using namespace std;

void solve(vector<int>arr){
    set<int>ab;
    int maxx = -1;
    bool freq[2001] = {false};
    for(int i=0;i<arr.size();i++)maxx = max(maxx,arr[i]);
    //for distance
    for(int i = 0;i<arr.size();i++){
        for(int j = i+1;j<arr.size();j++){
            if(!ab.insert(abs(arr[i]-arr[j])).second){
                cout<<"not a ruler"<<endl;
                return;

            }
            else freq[abs(arr[i]-arr[j])] = true;
        }
    }
    
    vector<int>missing;
    for(int i =1;i<=maxx;i++){
        if(!freq[i]){
            missing.push_back(i);
        }
    }
    if(missing.size()){
        cout<<"missing ";
        for(int i:missing)cout<<i<< " ";  
        cout<<endl;
    }
    else cout<<"perfect"<<endl;
    

}
int main() {
    vector<vector<int>> data;
    string line;
    while (getline(cin, line)) {
        if (line.empty()) continue;
        vector<int> numbers;
        istringstream iss(line);
        int num;
        while (iss >> num) {
            numbers.push_back(num);
        }
        data.push_back(numbers);
    }
    for(auto tc:data){
        //each test case
        solve(tc);
        // cout<<endl;
    }
    
    return 0;
}