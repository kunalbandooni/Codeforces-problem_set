#include <iostream>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n, m;
        cin>>n>>m;
        
        if(n == 1 and m == 1)
            cout<<0;
        else{
            int ans = n-1 + m-1 + min(n,m);
            cout<<ans;
        }
        
        cout<<endl;
    }
    return 0;
}
