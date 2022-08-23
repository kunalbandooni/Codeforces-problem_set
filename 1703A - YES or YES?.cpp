#include <iostream>
using namespace std;
string func(string s){
    if(s[0] == 'Y' || s[0] == 'y')
        if(s[1] == 'E' || s[1] == 'e')
            if(s[2] == 'S' || s[2] == 's')
                return "YES";
    return "NO";
}
int main(){
    int test;
    cin>>test;
    while(test--){
        string s;
        cin>>s;
        
        cout<<func(s);
        
        cout<<endl;
    }
    return 0;
}
