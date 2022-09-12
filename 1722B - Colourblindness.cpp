#include <iostream>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;

        string a, b;
        cin>>a>>b;

        bool flag = false;
        for(int i=0;i<n;i++){
            if(a[i] == 'R' and b[i] == 'R')
                continue;
            if(a[i] == 'R' or b[i] == 'R'){
                flag = true;
                break;
            }
        }

        if(flag)    cout<<"NO";
        else        cout<<"YES";
        cout<<endl;
    }
    return 0;
}
