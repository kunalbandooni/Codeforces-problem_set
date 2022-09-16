#include<iostream>
#include<set>
using namespace std;
int main(){
    int test;
    cin>>test;
    int test1 = test;
    int ans[test];
    while(test){
        int n;
        cin>>n;
        set<int> m;
        int a;
        for(int i=0;i<n;i++){
            cin>>a;
            m.insert(a);
        }
        
        if(((n - m.size()) & 1) == 0)
            ans[--test] = m.size();
        else
            ans[--test] = m.size() - 1;
    }

    for(int i=test1-1;i>=0;i--)
        cout<<ans[i]<<endl;
    return 0;
}
