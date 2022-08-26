#include<iostream>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        
        int l=0, r=0, u=0, d=0;
        
        int x, y;
        for(int i=0;i<n;i++){
            cin>>x>>y;
            if(x == 0){
                u = max(u, y);
                d = min(d, y);
            }
            else{
                l = min(l, x);
                r = max(r, x);
            }
        }
        
        int distance = r + u + abs(l) + abs(d);
        
        cout<< 2*distance;
        
        cout<<endl;
    }
    return 0;
}
