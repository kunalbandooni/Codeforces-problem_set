#include<bits/stdc++.h>
 
using namespace std;
 
#define ll long long
int main()
{
    int t;
    cin>>t;
    
    while(t--){
      string s;
      cin>>s;
      if(s.size() == 1){
          cout<<"NO"<<endl; continue;
      }
      
      bool flag = true;
      
      for(int i =0; i<s.size(); i++){
          char ch = 'c';
          char ch1 = 'd';
          if(i > 0) ch = s[i-1];
          if(i < s.size() - 1) ch1 = s[i+1];
          if(s[i] != ch && s[i] != ch1){
              flag = false; break;
          }
      }
      
      if(flag){
          cout<<"YES"<<endl;
      }
      else cout<<"NO"<<endl;
    }
    
    return 0;
}
