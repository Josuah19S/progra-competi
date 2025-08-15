/*
Date: 14/08/2025
CSES Problem Set
Dice Combinations

*/

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long long int lli;
typedef vector<int> vi;

void ways(vector<ll> &a, int n) {
  a[0] = 1;

  for(int i=1; i<=n; i++) {
    for(int j=1; j<=i; j++) {
      a[i] += a[i-j];
    }
  }
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;

  vector<ll> a(n+1, 0);
  ways(a, n);

  cout<<a[n];
  
  return 0;
}