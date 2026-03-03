/*
Date: 12/10/2025
Non-Integer Donuts
Accepted
*/

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long long int lli;
typedef vector<int> vi;

int conversion(string s) {
  s = s.substr(1);
  int punto = s.find('.');
  string dolar = s.substr(0, punto);
  string cent = s.substr(punto+1);
  int total = stoi(dolar) * 100 + stoi(cent);
  return total;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;

  string inicial, s;
  cin>>inicial;

  int total = conversion(inicial), cont = 0;

  for(int i=0; i<n; i++) {
    cin>>s;
    total += conversion(s);
    if(total % 100 != 0) cont++;
  }

  cout<<cont;
  
  return 0;
}