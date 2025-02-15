#include<bits/stdc++.h>
using namespace std;

    // @author : tariq002

#define endl '\n'
#define int long long

const int N = 3e5 + 9;

struct DSU {
  vector<int> par, rnk, sz;
  int c;
  DSU(int n) : par(n + 1), rnk(n + 1, 0), sz(n + 1, 1), c(n) {
    for (int i = 1; i <= n; ++i) par[i] = i;
  }
  int find(int i) {
    return (par[i] == i ? i : (par[i] = find(par[i])));
  }
  bool same(int i, int j) {
    return find(i) == find(j);
  }
  int get_size(int i) {
    return sz[find(i)];
  }
  int count() {
    return c;    //connected components
  }
  int merge(int i, int j) {
    if ((i = find(i)) == (j = find(j))) return -1;
    else --c;
    if (rnk[i] > rnk[j]) swap(i, j);
    par[i] = j;
    sz[j] += sz[i];
    if (rnk[i] == rnk[j]) rnk[j]++;
    return j;
  }
};

signed main()
{
    ios_base::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;
    map<int,pair<int,int>>mp;
    for(int i= 1;i<=m;i++){
        int u,v;
        cin >> u >> v;
        mp[i] = make_pair(u,v);
    }
    int q;
    cin >> q;
    vector<int>query;
    set<int>sort_q;
    while(q--){
        int x;
        cin >> x;
        query.push_back(x);
        sort_q.insert(x);
    }
    DSU dsu(n);
    for(int i = 1;i<=m;i++){
        if(sort_q.find(i)==sort_q.end()){

            dsu.merge(mp[i].first,mp[i].second);
        }
    }
    stack<int>ans;
    for(int i=query.size()-1;i>=0;i--){
        ans.push(dsu.count());
        dsu.merge(mp[query[i]].first,mp[query[i]].second);
    }
    while(!ans.empty()){
        cout<<ans.top()<<" ";
        ans.pop();

    }
     

    return 0;
}