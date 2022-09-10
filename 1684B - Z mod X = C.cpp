#include <iostream>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int a,b,c;
        cin>>a>>b>>c;
        
        // Observation based...
        int ans1 = b+c+a - (b+c)%b;
        cout<<ans1<<" "<<b<<" "<<c;
        
        cout<<endl;
    }
    return 0;
}
