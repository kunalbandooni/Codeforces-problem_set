#include <iostream>
#include <algorithm>
using namespace std;
bool func(string a, int n, string b, int m){
    if(n < m)
        return false;
    if(n == m)
        return (a == b);
    
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    
    // last m characters must be same
    // for us getting a true ans
    for(int i=0;i<m-1;i++)
        if(a[i]!=b[i])
            return false;
            
    char first_char = b[m-1];
    
    // if first_char is present anywhere
    // in the leftover string, we get YES
    for(int i=m-1;i<n;i++)
        if(a[i] == first_char)
            return true;

    return false;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        string a, b;
        cin>>a>>b;
        
        if(func(a,n,b,m))
            cout<<"YES";
        else    cout<<"NO";
        cout<<endl;
    }
    return 0;
}
