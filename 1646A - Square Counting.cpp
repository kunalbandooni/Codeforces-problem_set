#include <iostream>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        long long int n, s;
        cin>>n>>s;
        
        cout<< s / (n*n);
        
        cout << endl;
    }

    return 0;
}
