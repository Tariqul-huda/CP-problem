#include "bits/stdc++.h"
using namespace std;
#define int long long
#define OR ||
#define AND &&

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
      string s;
      cin>>s;
        if(s.find('1')==string::npos)cout<<0<<endl;
        else if(s.find('0')==string::npos)cout<<0<<endl;
        else
        {
            int target;
            for(int i=s.size()-1;i>=0;i--)
            {
                if(s[i]=='0'){target = i;break;}
            }
            // int first_one;
            // for(int i=0;i<s.size();i++)
            // {
            //     if(s[i]=='1'){first_one=i+1;break;}
            // }
            // int first_zero;
            // for(first_zero = first_one;first_zero<target;first_zero++)
            // {
            //     if(s[first_zero]=='0')break;
            // }
            // first_zero++;
            // int dist=0;
            // dist+=(first_zero-first_one);
            int first_zero,first_one;
            first_one = s.find('1');
            for(first_zero=first_one;first_zero<=target;first_zero++)
            if(s[first_zero]=='0')break;

            int dist = 0;
            while(first_zero<=target &&first_zero!=-1 )
            {
             dist += (first_zero-first_one)+1;
             s[first_zero]=s[first_one];
            first_one++;
           // cout<<first_zero<<endl;
            for(first_zero = first_one;first_zero<=target;first_zero++)
            {
                if(s[first_zero]=='0')break;
            }
            }
            cout<<dist<<endl;



        }
    }
    return 0;
}