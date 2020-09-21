#include <bits/stdc++.h>
using namespace std;
int main(){
	int t,A[1005];
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		bool kt = false;
		int max = 0;
		for (int i = 0; i<n;i++) cin >> A[i];
		for (int i = 0; i<n-1; i++){
			for (int j = i+1; j < n; j++){
				if (A[j] > A[i]){
					int tmp = A[j]- A[i];
					if (tmp > max) max = tmp;
					kt = true;
				}
			}
		}
		if (!kt) cout << -1;
		else cout << max;
		cout << endl;
	}

	return 0;
}