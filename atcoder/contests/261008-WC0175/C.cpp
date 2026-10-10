/*
Date: 09/10/2026
C - Repairing Road Potholes
AC
*/

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n, i, hprev, hpos;
  cin>>n;

  ll ops = 0;
  vi h(n);
  for(i=0; i<n; i++) cin>>h[i];

  if(n>2){
    for(i=1; i<n-1; i++){
      hprev = h[i-1];
      hpos = h[i+1];
      if(h[i]<hprev && h[i]<hpos) ops = ops + min(hprev, hpos) - h[i];
    }
  }

  cout<<ops;
  
  return 0;
}