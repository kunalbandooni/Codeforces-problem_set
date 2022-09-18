#include <iostream>
using namespace std;
void solve(){
	long long x,y;
	cin >> x >> y;
	if(y < x || y%x!=0){
		cout << "0 0\n";
		return;
	}
	cout << 1 << " " << y/x << endl;
}
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t=1;
	cin >> t;
	while(t--)
	    solve();
	return 0;
}
