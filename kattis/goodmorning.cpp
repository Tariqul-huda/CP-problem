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
void solve(vector<string>& arr, int x, int y, string current) {
    // First check boundaries
    if (x >= LIMIT || y >= LIMIT || current.size() > 3)
        return;
    
    // Check if current cell is valid
    if (arr[x][y] == '-')
        return;
    
    // Add current character to string
    string newStr = current + arr[x][y];
    
    // Add to result if non-empty
    if (!newStr.empty())
        result.push_back(newStr);
    
    // Stay in the same position and take the character again
    if (newStr.size() < 3) {
        solve(arr, x, y, newStr);  // Same position, adding the same character
    }
    
    // Recursive calls to move
    solve(arr, x+1, y, newStr);  // Down
    solve(arr,x+1,y,current);
    solve(arr, x, y+1, newStr);
    solve(arr,x,y+1,current);
}

void crack()
{
    int n;
    cin>> n;
   auto i = r.lower_bound(n);
   if(*i==n)cout<<n<<endl;
   else{
    if(abs(*i-n)<abs(*prev(i)-n)){
        cout<<*i<<endl;

    }
    else cout<<*prev(i)<<endl;
    // cerr<<*next(i)<<endl;
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
    // cout<<result.size()<<endl;
    // for(string s:result)cerr<<s<<endl;

    for(auto &i:result){
        int help = stoll(i);
      r.insert(help);
    }
    // for(auto i:r)cerr<<i<<endl;
    
    test
    {
        //cout << "Case " << ++tc << ": ";
        crack();
    }
    //cerr << 1.0 * (clock() - st) / CLOCKS_PER_SEC << endl;
    return 0;
}