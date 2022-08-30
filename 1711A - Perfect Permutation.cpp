#include <iostream>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        int a[n+1];
        for(int i=1;i<=n;i++){
            if(i%2 == 1)
                a[i] = i+1;
            else
                a[i] = i-1;
        }
        
        if(n%2 == 1){
            a[n]--;
            swap(a[1],a[n]);
        }
        
        for(int i=1;i<=n;i++)
            cout<<a[i]<<" ";
        
        cout<<endl;
    }

    return 0;
}
