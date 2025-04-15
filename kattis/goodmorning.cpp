#include<bits/stdc++.h>
using namespace std;

    // @author : tariq002

#define test  \
    int T, tc = 0;    \
    cin >> T; \
    while (T--)
#define faf ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define endl '\n'
#define int long long
/*------------X------------*/
#define LIMIT 4
vector<string>result;
unordered_map<string,bool>mp;
set<int>r;
void solve(vector<string>&arr,int x, int y, string current){
    if(x==LIMIT or y==LIMIT or current.size()>3){

        return;
    }
    string tt = (arr[x][y]!='-')?current+arr[x][y]:current;
    result.push_back(current);
    
    cout<<tt<<endl;
    solve(arr,x,y,tt);
    // current.pop_back();
    tt.pop_back();
    solve(arr,x+1,y,tt);
    tt.pop_back();
    solve(arr,x,y+1,tt);
    



    
    // solve(arr,x+1,y,tt);
    // result.push_back(current);
    // solve(arr,x,y+1,tt);
    // result.push_back(current);



//     if(current.size()>3)return;
    
//     solve(arr,x,y,(arr[x][y]!='-')?current+arr[x][y]:current);
//     result.push_back(current);
//     solve(arr,x+1,y,(arr[x][y]!='-')?current+arr[x][y]:current);
//     result.pop_back();
    
//     solve(arr,x+1,y,current);
//    if(current[0]!=' ' or current[current.size()-1]!=' ')
//     result.push_back(current);
//     solve(arr,x,y+1,(arr[x][y]!='-')?current+arr[x][y]:current);
//     if(current[0]!=' ' or current[current.size()-1]!=' ')
//     result.push_back(current);

}
void crack()
{
    int n;
    cin>> n;
   auto i = r.lower_bound(n);
   if(*i==n)cout<<n<<endl;
   else{
    if(abs(*next(i)-n)<abs(*prev(i)-n)){
        cout<<*next(i)<<endl;

    }
    else cout<<*prev(i)<<endl;
    cerr<<*next(i)<<endl;
   }
    

}

int32_t main()
{
    faf auto st = clock();
    vector<string>dict = {
        "123",
        "456",
        "789",
        "-0-"
    };

    for(int i=0;i<LIMIT;i++)for(int j=0;j<LIMIT;j++)if(dict[i][j]!='-')solve(dict,i,j,"");
    sort(result.begin(),result.end());
    result.erase(result.begin(),find(result.begin(),result.end(),"0"));
    cout<<result.size()<<endl;

    for(auto &i:result){
        int help = stoll(i);
      r.insert(help);
    }
    
    test
    {
        //cout << "Case " << ++tc << ": ";
        crack();
    }
    //cerr << 1.0 * (clock() - st) / CLOCKS_PER_SEC << endl;
    return 0;
}