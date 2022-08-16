#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        int i = 0, count = 0;
 
        if (n == 1)
            cout << 2;
 
        else{
            count += n/3;
            n = n - (3*(n/3));
            
            count += n/2;
            n = n - (2*(n/2));            
 
            cout << count + n;
        }
        cout<<endl;
    }
    return 0;
}
