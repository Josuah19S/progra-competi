/*
Date: 02/02/2025
Kattis
99 Problems
2/55 accepted(1)
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, q, t, d, x, size;
    cin>>n>>q;

    vector<int> a;
    for(int i=0; i<n; i++){
        cin>>x;
        a.push_back(x);
    }

    while(q--){
        int del = -1;
        size = a.size();

        cin>>t>>d;
        if(a.empty()){
            cout<<-1<<"\n";
            continue;
        }
        else if(t==1){
            for(int i=size-1; i>=0; i--){
                if(a[i]>d){
                    del = a[i];
                    a.erase(a.begin() + i);
                    break;
                }
            }
        } else {
            for(int i=0; i<size; i++){
                if(a[i]<=d){
                    del = a[i];
                    a.erase(a.begin() + i);
                    break;
                }
            }
        }
        cout<<del<<"\n";
    }

    return 0;
}