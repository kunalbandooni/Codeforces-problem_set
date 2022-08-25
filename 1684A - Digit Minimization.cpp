#include <iostream>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        
        if(n/100 == 0)
            cout<<n%10;
        else{
            int mini = 1e9+7;
            while(n){
                mini = min(mini, n%10);
                n = n/10;
            }
            cout<<mini;
        }
        
        cout<<endl;
    }
    return 0;
}
