/*
Date: 24/07/2025
2065 B. Skibidus and Ohio

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t, n, i;
    string s;
    cin>>t;

    while(t--){
      cin>>s;
      while(s.size() > 1) {
        n = s.size();
        for(i=0; i<n-1; i++) {
          if(s[i] == s[i+1]) {
            s[i] = (i > 1 ? s[i-1] : 'b');
            s.erase(i+1, 1);
            break;
          }
        }
        if(i+1 == n && n > 2) break;
      }
      cout<<s.size()<<"\n";
    }
    
    return 0;
}