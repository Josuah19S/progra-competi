/*
Date: 07/08/2025
2126 A. Only One Digit
Accepted
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t, x, n;
  string s;
  cin>>t;

  while(t--){
    cin>>s;
    n = s.size();
    x = 9;
    if(n == 1) x = s[0] - '0';
    else {
      for(int i=0; i<n; i++) {
        char c = s[i] - '0';
        if(c < x) x = c;
      }
    }
    cout<<x<<"\n";
  }
  
  return 0;
}