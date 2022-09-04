#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n,s,e;
        cin>>n>>s>>e;
        vector<pair<int, int>> v; 
        for(int i=0;i<n;i++){
            int a, b;
            cin>>a>>b;
            v.push_back({a,b});
        }
        sort(v.begin(), v.end());

        int i=0;
        int n_s, n_e;
        while(i<n){
            if(s<v[i].first){
                n_s = v[i].first - s;
                n_e = v[i].second - e;
                break;
            }
            if(s == v[i].first){
                if(e <= v[i].second){
                    n_s = v[i].first - s;
                    n_e = v[i].second - e;
                    break;
                }
            }
            i++;
        }
        if(i == n){
            n_s = 23 - s + v[0].first;
            n_e = 60 - e + v[0].second;
        }
        
        if(n_e >= 60){
            int temp = n_e/60;
            n_e = n_e%60;
            n_s += temp;
        }
        
        if(n_s < 0)
            n_s = 60 + n_s;
        if(n_e < 0){
            n_e = 60 + n_e;
            n_s--;
        }
        
        cout<<n_s<<" "<<n_e;
        
        cout<<endl;
    }

    return 0;
}
