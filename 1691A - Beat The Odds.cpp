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
        
        int even = 0, odd = 0;
        for(int i=0;i<n;i++){
            if(a[i]%2 == 0)
                even++;
            else
                odd++;
        }
        cout<<min(even, odd);
        
        cout<<endl;
    }
    return 0;
}
