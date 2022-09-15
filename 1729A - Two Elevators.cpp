#include <iostream>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int x, y, z;
        cin>>x>>y>>z;
        int temp1 = x - 1;
        int temp2 = abs(z - y) + (z - 1);
        if(temp1 < temp2)
            cout<<1;
        else if(temp1 > temp2)
            cout<<2;
        else
            cout<<3;
        
        cout<<endl;
    }

    return 0;
}
