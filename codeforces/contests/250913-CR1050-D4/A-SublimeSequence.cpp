/*
Date: 13/09/2025
Codeforces Round 1050 (Div. 4)
A. Sublime Sequence

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t, x, n;
  cin>>t;

  while(t--){
    cin>>x>>n;
    cout<<(n & 1 ? x : 0)<<"\n";
  }
  
  return 0;
}