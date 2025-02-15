#include "bits/stdc++.h"
using namespace std;
#define int long long
#define OR ||
#define AND &&
const int prime = 101;

long long calculateHash(string const& s, int len) {
    long long hash = 0;
    for (int i = 0; i < len; ++i) {
        hash += s[i] * pow(prime, i);
    }
    return hash;
}

long long recalculateHash(long long prevHash, char oldChar, char newChar, int len) {
    long long newHash = prevHash - oldChar;
    newHash /= prime;
    newHash += newChar * pow(prime, len - 1);
    return newHash;
}

bool rabinKarp(string const& text, string const& pattern) {
    int n = text.size();
    int m = pattern.size();
    long long patternHash = calculateHash(pattern, m);
    long long textHash = calculateHash(text, m);

    for (int i = 0; i <= n - m; ++i) {
        if (patternHash == textHash && text.substr(i, m) == pattern) {
            return true;
        }
        if (i < n - m) {
            textHash = recalculateHash(textHash, text[i], text[i + m], m);
        }
    }
    return false;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
      string s;
      cin>>s;
      if(rabinKarp(s,"101") || rabinKarp(s,"010"))
      {
        cout<<"Good"<<endl;
      }
      else
      {
        cout<<"Bad"<<endl;
      }
    }
    return 0;
}