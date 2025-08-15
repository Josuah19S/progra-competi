/*
Date: 23/07/2025
2091 A. Olympiad Date
Accepted
*/

#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t, n, i, j, m, x;
    string date;
    char c;
    cin>>t;

    while(t--) {
      cin>>n;
      vi a(n);
      for(i=0; i<n; i++) cin>>a[i];
      
      x = 0;
      date = "01032025";
      for(i=0; i<n; i++) {
        c = a[i] + '0';
        m = date.size();
        if(date == "") break;
        for(j=0; j<m; j++) {
          if(c == date[j]) {
            x++;
            date.erase(j, 1);
            break;
          }
        }
        if(x == 8) break;
      }
      cout<<(x == 8 ? i+1 : 0)<<"\n";
    }
    
    return 0;
}