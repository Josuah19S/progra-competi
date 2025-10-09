/*
Date: 04/10/2025
702 A. Maximum Increase
Accepted
*/

#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n, max = 1, cont = 1;
  cin>>n;

  vi a(n);

  for(int i=0; i<n; i++) cin>>a[i];

  for(int i=1; i<n; i++) {
    if(a[i] > a[i-1]) cont++;
    else cont = 1;
    if(cont > max) max = cont;
  }

  cout<<max;
  
  return 0;
}