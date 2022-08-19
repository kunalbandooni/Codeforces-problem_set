#include <iostream>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int a, b, c, d;
        cin>>a>>b>>c>>d;
        
        if(a == 0 and b == 0 and c == 0 and d == 0)
            cout<<0;
        else if(a == 1 and b == 1 and c == 1 and d == 1)
            cout<<2;
        else
            cout<<1;
        
        cout<<endl;
    }
    return 0;
}
