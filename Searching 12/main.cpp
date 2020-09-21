#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int A[100005] = {0},B[100005];
		int X,n;
		cin >> n >> X;
		for (int i = 0; i< n; i++){
			cin >> B[i];
			A[B[i]]++;
		}
		bool kt = false;
		for (int i = 0; i< n; i++){
			// cout << X - B[i] << " ";	
		// }
			if (A[abs(X-B[i])]){
				cout << 1;
				kt = true;
				break;
			}
		}
		if (!kt) cout << -1;
		cout << endl;
	}
	return 0;
}