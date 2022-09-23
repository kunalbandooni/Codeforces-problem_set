#include <iostream>
using namespace std;
int count(string s, int n){
    int count = 0;
    for(int i=0;i<n;i++){
        if(s[i] == 'U')
            count++;
        else if(s[i] == 'D')
            count--;
    }
    return count;
}
int main(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        
        for(int i=0;i<n;i++){
            int x;cin>>x;
            string s;cin>>s;
            int c = count(s, x);
            
            a[i] = a[i] - c%10;
            if(a[i] < 0)
                a[i] += 10;
            else if(a[i] > 9)
                a[i] -= 10;
        }
        
        for(int i=0;i<n;i++)
            cout<<a[i]<<" ";

        cout<<endl;
    }
    return 0;
}
