#include <iostream>
using namespace std;
bool func(int a[], int n){
    int i = 2;
    while(i--){
        n = a[n];
        if(n == 0)
            return false;
    }
    return true;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[4];
        for(int i=1;i<4;i++)
            cin>>a[i];
        
        if(func(a,n))
            cout<<"YES";
        else
            cout<<"NO";
        cout<<endl;
    }
    return 0;
}
