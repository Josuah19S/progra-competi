/*
Date: 05/10/2025
CSES Problem Set
String Matching
Time Limit Exceeded
*/

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long long int lli;
typedef vector<int> vi;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  string n, m;
  cin>>n>>m;

  int cont = 0;

  int nsize = n.size(), msize = m.size();
  for(int i=0; i+msize <= nsize; i++) {
    if(n.substr(i, msize) == m) cont++;
  }

  cout<<cont;
  
  return 0;
}