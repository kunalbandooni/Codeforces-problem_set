#include<iostream>
#include<climits>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n,m;
        cin>>n>>m;
        int a;
        int maxi = INT_MIN;
        int x, y;
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++){
                cin>>a;
                if(maxi < a){
                    maxi = a;
                    x = i+1;
                    y = j+1;
                }
            }
        
        //LOGIC STARTED ALREADY
        int h = max(x, n-x+1);
        int w = max(y, m-y+1);
        
        cout<<h*w;
        
        cout<<endl;
    }
    return 0;
}
