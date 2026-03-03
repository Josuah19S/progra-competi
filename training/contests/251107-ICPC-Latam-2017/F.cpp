/*
Date: 07/11/2025
2017-2018 ACM-ICPC Latin American Regional Programming Contest
F

*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n; cin >> n;
  ll a = 0, b = 0;
  for (int i = 0; i < n; i++) {
    int u, v, w; cin >> u >> v >> w;
    if (u == v) a += w;
    b = max((ll)w, b);
  } 
  cout << max(a, b);
}
