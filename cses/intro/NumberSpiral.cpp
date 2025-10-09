/*
Date: 25/09/2025
CSES Problem Set
Number Spiral
ACCEPTED
*/

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t;
  cin>>t;

  ll y, x, n, num;

  while(t--){
    cin>>x>>y;

    n = max(y, x);

    if(n & 1) {
      if(y == n) num = n*n - (x - 1);
      else num = (n-1)*(n-1) + y;
    } else {
      if(x == n) num = n*n - (y - 1);
      else num = (n-1)*(n-1) + x;
    }

    cout<<num<<"\n";
  }
  
  return 0;
}