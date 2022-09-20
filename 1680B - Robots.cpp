#include <iostream>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n,m;
        cin>>n>>m;
        
        char a[n][m];
        
        int count = 0;
        int minj = 0;
        bool ans = true;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
                if(a[i][j] == 'R' and count == 0){
                    count = 1;
                    minj = j;
                }
                if(a[i][j] == 'R' and count == 1){
                    if(minj > j)
                        ans = false;
                }
            }
        }
        
        if(ans) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }

    return 0;
}
