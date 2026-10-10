/*
Date: 09/10/2026
B - Vertical Reading of a Memoir
AC
*/

#include<bits/stdc++.h>
using namespace std;

typedef vector<string> vs;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int h, w, k;
  cin>>h>>w>>k;

  vs s(h); string sm = ""; // Secret message
  for(int i=0; i<h; i++) {
    cin>>s[i];
    sm += s[i][k-1];
  }

  cout<<sm;
  
  return 0;
}