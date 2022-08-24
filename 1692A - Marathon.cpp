#include <iostream>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int a[4];
        for(int i=0;i<4;i++)
            cin>>a[i];
        
        int c = 0;
        for(int i=1;i<4;i++)
            if(a[0] < a[i])
                c++;
 
        cout<<c<<endl;
    }
    return 0;
}
