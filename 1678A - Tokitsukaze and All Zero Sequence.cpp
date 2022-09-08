#include <iostream>
#include <unordered_map>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        int a, flag = 0;
        unordered_map<int, int> mp;
        for(int i=0;i<n;i++){
            cin>>a;
            mp[a]++;
            if(mp[a] >= 2)
                flag++;
        }
        
        if(mp[0] > 0)
            cout<<n - mp[0];
        else if(flag)
            cout<<n;
        else
            cout<<n + 1;
        cout<<endl;
    }

    return 0;
}
