/*
Date: 01/11/2025
2022-2023 ACM-ICPC Latin American Regional Programming Contest
E. Empty Squares

*/

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long long int lli;
typedef vector<int> vi;

vector<bool> a;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n, k, E;
  cin>>n>>k>>E;

  a.resize(n+1, true);
  a[k+1] = false;
  int R = n - k - E, ans = n - k;

  int e = E;
  if(a[e]) {
    a[e] = false;
    ans -= e;
  } else {
    for(int i=E; i>=1; i--) {
      if(a[i] && i <= e) {
        a[i] = false;
        e -= i;
        ans -= i;
      }
    }
  }

  int r = R;
  if(a[r]) {
    a[r] = false;
    ans -= r;
  } else {
    for(int i=R; i>=1; i--) {
      if(a[i] && i <= r) {
        a[i] = false;
        r -= i;
        ans -= i;
      }
    }
  }

  cout<<ans;
  
  return 0;
}