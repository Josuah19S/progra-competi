/*
Date: 04/10/2025
CSES Problem Set
Two Knights
ACCEPTED
*/

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll formas(int n) {
  ll f, x = 1LL * n * n;
  f = (x * (x-1))/2 - 4*(n-1)*(n-2);
  return f;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;

  for(int i=1; i<=n; i++) cout<<formas(i)<<"\n";
  
  return 0;
}