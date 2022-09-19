#include <iostream>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int a, b, c, x, y;
        cin>>a>>b>>c>>x>>y;
        
        bool dog = false, cat = false;
        if(a>=x)
            dog = true;
        else if(a+c >= x){
            c = c - (x - a);
            dog = true;
        }
        
        if(b>=y)
            cat = true;
        else if(b+c >= y)
            cat = true;
        
        if(dog and cat)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

    return 0;
}
