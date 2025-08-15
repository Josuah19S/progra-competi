/*
Date: 23/06/2025
CSES Problem Set
Distinct Numbers
ACCEPTED
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a;
    set<int> s;

    cin>>n;

    for(int i=0; i<n; i++) {
        cin>>a;
        s.insert(a);
    }

    cout<<s.size();

    return 0;
}