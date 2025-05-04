/*
Date: 11/02/2025
Codeforces
2003 A. Turtle and Good Strings
Wrong answer on test 3
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t, n;
    cin>>t;

    string s;
    while(t--){
        cin>>n>>s;
        int ways = (1 << (n - 1));

        bool band;
        for (int mask = 0; mask < ways; mask++){
            string part;
            vector<string> comb;
            for (int i=0; i<n; i++){
                part += s[i];
                if (mask & (1 << i)){
                    comb.push_back(part);
                    // cout<<part<<" ";
                    part.clear();
                }
            }
            // cout<<part<<"\n";
            comb.push_back(part);
            
            int size = comb.size();
            if(size>=2){
                band = true;
                for(int i=0; i<size-1; i++){
                    for(int j=i+1; j<size; j++){
                        char ti = comb[i][0], tj = comb[j].back();
                        if(ti == tj){
                            band = false;
                            break;
                        }
                    }
                }
                if(band) break;
            }
        }
        cout<<(band ? "YES" : "NO")<<"\n";
    }
    
    return 0;
}