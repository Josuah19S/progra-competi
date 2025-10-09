/*
Date: 05/10/2025
1352 - C. K-th Not Divisible by n
Accepted
*/

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t;
  cin>>t;

  while(t--){
    ll n, k;
    cin>>n>>k;

    ll bloques, resto, x;
    bloques = k / (n-1);
    resto = k % (n-1);
    x = n * bloques;

    cout<<(resto == 0 ? x - 1 : x + resto)<<"\n";
  }
  
  return 0;
}