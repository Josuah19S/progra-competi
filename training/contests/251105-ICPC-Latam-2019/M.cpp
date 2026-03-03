/*
Date: 05/11/2025
2019-2020 ACM-ICPC Latin American Regional Programming Contest
M. Mountain Ranges
Accepted
*/

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long long int lli;
typedef vector<int> vi;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n, x, cont, max;
  cin>>n>>x;

  vi a(n);

  for(int i=0; i<n; i++) cin>>a[i];

  cont = max = 1;
  for(int i=1; i<n; i++) {
    if(a[i]-a[i-1] <= x) {
      cont++;
      if(cont > max) max = cont;
    }
    else cont = 1;
  }

  cout<<max;
  
  return 0;
}