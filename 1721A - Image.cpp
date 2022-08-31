#include <iostream>
#include<algorithm>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        char a[4];
        for(int i=0;i<4;i++)
            cin>>a[i];
    
        sort(a, a+4);
        int c = 0;
        for(int i=0;i<4;i++)
            if(a[i] != a[i+1])
                c++;
        cout<<c-1;

        cout<<endl;
    }
    return 0;
}
