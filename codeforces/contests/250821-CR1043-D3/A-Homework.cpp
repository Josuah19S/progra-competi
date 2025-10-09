/*
Date: 21/08/2025
Codeforces Round 1043 (Div. 3)
A. Homework
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
  
  int t, n, m;
  string a, b, c;

  cin>>t;

  while(t--) {
    cin>>n>>a>>m>>b>>c;
    for(int i=0; i<m; i++) {
      if(c[i] == 'V') a = b[i] + a;
      else a = a + b[i];
    }

    cout<<a<<"\n";
  }

  return 0;
}