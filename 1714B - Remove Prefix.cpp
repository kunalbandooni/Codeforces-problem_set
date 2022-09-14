#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        unordered_map<int, int> s;
        int a[n], sol = 0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            s[a[i]]++;
        }
        int i = 0, c=0;

        while(s.size()!=n){
            c++;
            s[a[i]]--;

            if(s[a[i]]== 0)
                s.erase(a[i]);

            i++;
            n--;
        }
        cout<<c;
        
        cout<<endl;
    }

    return 0;
}
