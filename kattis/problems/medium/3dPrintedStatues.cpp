/*
Date: 02/02/2025
Kattis
3D Printed Statues
2/33
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, d;
    cin>>n;

    if(n==1) d = 1;
    else if(n==2) d = 2;
    else d = (n%3 == 0 ? n%2+2 : n%2+3);

    cout<<d;
    
    return 0;
}