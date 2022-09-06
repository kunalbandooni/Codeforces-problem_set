#include <iostream>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        string s;
        cin>>s;
        int l = s[0] + s[1] + s[2];
        int r = s[3] + s[4] + s[5];
        if(l == r)
            cout<<"YES";
        else
            cout<<"NO";
        
        cout<<endl;
    }
    return 0;
}
