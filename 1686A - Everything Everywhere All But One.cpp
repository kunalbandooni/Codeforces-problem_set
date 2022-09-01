#include<iostream>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        int a[n];
        int sum = 0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        double xx = (double)sum/n;
        bool flag = false;
        for(int i=0;i<n;i++){
            if(xx == a[i]){
                flag = true;
                break;
            }
        }
        if(flag)   cout<<"YES";
        else    cout<<"NO";
        cout<<endl;
    }
    return 0;
}
