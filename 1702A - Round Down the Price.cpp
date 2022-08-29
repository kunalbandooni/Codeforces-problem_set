#include<iostream>
#include<math.h>
using namespace std;
long long func(int n){
    long long ans = n;
    for(int i=0; pow(10,i) <= n;i++){
        if(n == pow(10,i))
            return 0;
        long long sub = n - pow(10,i);
        ans = min(ans, sub);
    }
    return ans;
}
int main(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        
        cout<< func(n) <<endl;
    }
    return 0;
}
