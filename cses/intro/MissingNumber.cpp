/*
Date: 23/06/2025
CSES Problem Set
Missing Number
ACCEPTED
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, x;
    cin>>n;

    vector<int> a(n, false);
    for(int i=0; i<n-1; i++) {
        cin>>x;
        a[x-1] = true;
    }

    for(int i=0; i<n; i++) {
        if(!a[i]) {
            cout<<i+1;
            break;
        }
    }

    return 0;
}