/*
Date: 01/11/2025
2022-2023 ACM-ICPC Latin American Regional Programming Contest
D. Daily Trips
Accepted
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n, h, w;
  cin>>n>>h>>w;

  while(n--){
    char t;
    cin>>t;
    if(t == 'Y' || w == 0) {
      cout<<"Y ";
      h--;
      w++;
    } else cout<<"N ";

    cin>>t;
    if(t == 'Y' || h == 0) {
      cout<<"Y ";
      w--;
      h++;
    } else cout<<"N ";

    cout<<"\n";
  }
  
  return 0;
}