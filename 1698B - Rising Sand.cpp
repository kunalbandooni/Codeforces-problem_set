#include <iostream>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n, k;
        cin>>n>>k;
        
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];

        int ans = 0;
        if(k <= 1){
            ans = (n-1)/2;
        }else{
            for(int i=1;i<n-1;i++)
                if(a[i] > a[i-1] + a[i+1])
                    ans++;
        }

        cout<<ans<<endl;
    }

    return 0;
}
