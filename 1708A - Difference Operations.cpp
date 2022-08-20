#include <iostream>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        
        bool flag = true;
        for(int i=0;i<n;i++){
            if(a[i]%a[0] != 0){
                flag = false;
                cout<<"NO";
                break;
            }
        }
        
        if(flag)
            cout<<"YES";
        
        cout<<endl;
    }
    return 0;
}
