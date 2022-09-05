#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n == 1){
            cout<<"3"<<endl;
            continue;
        }
        if(n != 1 && __builtin_popcount(n) == 1)
            cout<<n + 1<<endl;
        else {
            int ans = 1;
            for(int i = 0; i < 32; i++){
                if((n & (1<<i))){
                    ans = (1 << i);
                    break;
                }
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}
