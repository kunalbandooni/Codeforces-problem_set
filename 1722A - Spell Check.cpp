#include<iostream>
#include<map>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        
        if(n!=5){
            cout<<"NO";
        }
        else{
            map<char,int> mp;
            for(int i=0;i<5;i++)
                mp[s[i]]++;
            if(mp['T'] == 1 and mp['i'] == 1 and mp['m'] == 1 and mp['u']==1 and mp['r'] == 1)
                cout<<"YES";
            else    cout<<"NO";
        }
        
        cout<<endl;
    }
    return 0;
}
