/*
Date: 28/10/2025
Codeforces Round 1062 (Div. 4)
B. Your Name
Accepted
*/

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long long int lli;
typedef vector<int> vi;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t, n;
  cin>>t;

  string s1, s2;
  while(t--){
    map<char, int> s, t;
    cin>>n>>s1>>s2;

    for(int i=0; i<n; i++) {
      s[s1[i]]++;
      t[s2[i]]++;
    }

    cout<<(s == t ? "YES" : "NO")<<"\n";
  }
  
  return 0;
}