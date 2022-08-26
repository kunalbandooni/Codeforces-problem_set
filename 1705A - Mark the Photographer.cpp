#include<iostream>
#include<algorithm>
using namespace std;
bool func(int a[], int n, int x){
    for(int i=0;i<n;i++)
        if(a[i] + x > a[i+n])
            return false;
    
    return true;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, x;
        cin>>n>>x;
        int z = 2*n;
        int a[z];
        for(int i=0;i<z;i++)
            cin>>a[i];
        
        sort(a, a+z);
        if(func(a, n, x))
            cout<<"YES";
        else cout<<"NO";
        
        cout<<endl;
    }
    return 0;
}
