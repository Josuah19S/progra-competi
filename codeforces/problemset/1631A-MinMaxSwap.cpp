/*
Date: 10/02/2025
Codeforces
1631 A. Min Max Swap
Accepted
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t, n;
    cin>>t;

    while(t--){
        cin>>n;
        int min = INT_MAX;
        vector<int> a(n), b(n);
        for(int i=0; i<n; i++) cin>>a[i];
        for(int i=0; i<n; i++) cin>>b[i];

        auto maxa = max_element(a.begin(), a.end());
        auto maxb = max_element(b.begin(), b.end());
        bool band = (*maxa > *maxb ? true : false);

        for(int i=0; i<n; i++){
            if((band && a[i] > b[i]) || (!band && a[i] < b[i])) swap(a[i], b[i]);
            maxa = max_element(a.begin(), a.end());
            maxb = max_element(b.begin(), b.end());
            
            int result = *maxa * *maxb;
            if(result < min) min = result;
        }

        cout<<min<<"\n";
    }
    
    return 0;
}