/*
Date: 04/10/2025
CSES Problem Set
Permutations
ACCEPTED
*/

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long long int lli;
typedef vector<int> vi;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;

  if (n == 1) cout<<1;
  else if (n == 2 || n == 3) cout<<"NO SOLUTION";
  else {
    vi a, b;
    for(int i=1; i<=n; i++) {
      if(i & 1) b.push_back(i);
      else a.push_back(i);
    }

    for(int n : a) cout<<n<<" ";
    for(int n : b) cout<<n<<" ";
  }
  
  return 0;
}