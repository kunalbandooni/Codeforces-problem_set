#include <iostream>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n, m;
        cin>>n>>m;
        
        int sum = 0;
        int a;
        for(int i=0;i<n;i++){
            cin>>a;
            sum += a;
        }
        
        if(m >= sum)
            cout<<0;
        else
            cout<<sum-m;
        
        cout<<endl;
    }
    return 0;
}
