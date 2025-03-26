#include<bits/stdc++.h>
using namespace std;
const long long limit = 1<<30;
bitset<limit>ab;
string complement(string s){
    string temp = "";
    for(char i:s)temp.push_back((i=='0')?'1':'0');
    return temp;
}
int main(){
    vector<string>result;
    result.push_back("");
    result.push_back("0");
    result.push_back("01");
    int prev = 1;
    for(int i =3;i<=30;i++){
        result.push_back(result.back()+complement(result.back()));
    }
    int n, k;
    cin >> n >> k;
    cout<<result[n][k-1]<<endl;

    return 0;
}