/*
Date: 11/08/2025
CSES Problem Set
Repetitions
ACCEPTED
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  string s;
  int n, cont, ans;
  cin>>s;

  n = s.size();
  cont = ans = 1;

  if(n > 1) {
    for(int i=0; i<n-1; i++) {
      if(s[i] == s[i+1]) {
        cont++;
        if(cont > ans) ans = cont;
      } else cont = 1;
    }
  }

  cout<<ans;
  
  return 0;
}