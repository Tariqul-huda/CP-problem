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
#define is ==
/*------------X------------*/

int binary_search(vector<int>&a,int n,int x){
    int l = 0,r=n-1;
    int ans = -1;
    while(l<=r){
        int mid = (l+r)/2;
        if(a[mid]==x)return mid;
        else if(a[mid]>x)r = mid-1;
        else l = mid+1; 
    }
    return ans;
}
void erase_function(vector<int>& a_third,vector<int>&a,int x,vector<int>&b,int i,int &first, int &second,int &third){
    if(binary_search(a,a.size(),x)>=0){
        if(binary_search(a_third,a_third.size(),x)>=0){
            a_third[binary_search(a_third,a_third.size(),x)]=-1;
            third--;
        }
        a[binary_search(a,a.size(),x)]=-1;

        b[i]=-1;
        first--;
        second--;
    }
}
void print(vector<int>&first,int n,int sizee){
    cout<<n<<" "<<sizee<<" ";
        for(int i:first){
        if(i>=0)cout<<i<<" ";
    }
    cout<<endl;
}
void crack()
{
    vector<int>first,second,third;

    int n,m,l;
    cin >> n;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        first.push_back(x);
    }
    cin >> m;
    for(int i=0;i<m;i++){
        int x;
        cin >> x;
        second.push_back(x);
    }
    cin >> l;
    for(int i=0;i<l;i++){
        int x;
        cin >> x;
        third.push_back(x);
    }
    sort(first.begin(),first.end());
    sort(second.begin(),second.end());
    sort(third.begin(),third.end());;
    //first ->second, first->thrid;
    for(int i=0;i<first.size();i++){
        
        erase_function(third,second,first[i],first,i,m,n,l);
        
    }
    // second -> third;
    for(int i=0;i<second.size();i++){
        if(second[i]>=0){

        if(binary_search(third,third.size(),second[i])>=0){
            third[binary_search(third,third.size(),second[i])]=-1;
            second[i]=-1;
            l--;m--;
        }
        }
        
    }
   
   //print
   if( n is m and m is l and n is l){
    print(first,1,n);
    print(second,2,m);
    print(third,3,l);
   }
   else if(n is l){
    if(m > l){
        print(second,2,m);
    }
    else{
        print(first,1,n);
        print(third,3,l);
    }
   }
   else if(m==l){
    if(n>m){
        print(first,1,n);
    }
    else{
        print(second,2,m);
        print(third,3,l);
    }
   }
   else if(n == m){
    if(l>m){
        print(third,3,l);
    }
 else{
        print(first,1,n);
        print(second,2,m);
    }
   }
   else{
    if(m>n and m >l){
        print(second,2,m);
    } else if(n>m and n>l)print(first,1,n);
    else if(l>n and l>m)print(third,3,l);
   }


}

int32_t main()
{
    faf auto st = clock();
    test
    {
        cout << "Case #" << ++tc << ": "<<endl;
        crack();
    }
    //cerr << 1.0 * (clock() - st) / CLOCKS_PER_SEC << endl;
    return 0;
}