/*
Date: 12/08/2025
CSES Problem Set
Increasing Array
ACCEPTED
*/

#include<bits/stdc++.h>
using namespace std;

typedef long long int lli;
typedef vector<int> vi;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  lli ans = 0;
  cin>>n;
 
  vi x(n);
  for(int i=0; i<n; i++) cin>>x[i];
 
  if(n > 1) {
    for(int i=0; i<n-1; i++) {
      if(x[i] > x[i+1]) {
        ans += abs(x[i]-x[i+1]);
        x[i+1] = x[i];
      }
    }
  }

  cout<<ans;
  
  return 0;
}