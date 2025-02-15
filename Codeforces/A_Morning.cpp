#include<iostream>
#include<cstdio>
#define SIZE 4
using namespace std;
int to_digit(char c)
{
    return c-'0';
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    string h = "1234567890";
    while(t--)
    {
        string s;
        cin>>s;
        int pointer = 1;
        int sec = 0;
        for(int i=0;i<SIZE;i++)
        {
            bool is = false;
            if(to_digit(s[i])==0)
            {
                pointer = 9;
            sec+=abs(pointer-to_digit(s[i]))+1;
                
                is = true;
            }
            else
            pointer = to_digit(s[i]);

           if(to_digit(s[i+1])==0 && is)
            sec++;
            
        }
        cout<<sec<<endl;
    }
}