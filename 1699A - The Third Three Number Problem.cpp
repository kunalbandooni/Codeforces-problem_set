#include <iostream>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        int ans = n/2;
        if(n%2 == 0)
            cout<<ans<<" "<<ans<<" "<<0;
        else    cout<<-1;
        cout<<endl;   
    }
    return 0;
}
