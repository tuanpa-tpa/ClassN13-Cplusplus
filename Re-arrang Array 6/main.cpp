#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int A[n+1];
		vector<int> B;
		B.clear();
		for (int i = 0; i< n;i++) cin >> A[i];
			A[n] = 0;
		for (int i = 1; i<= n;i++){
			if (A[i-1] != 0){
				if (A[i-1] == A[i]){
					B.push_back(A[i]*2);
					A[i] = 0;
				}
				else B.push_back(A[i-1]);
			}
		}
		B.resize(n);
		for (int i = 0; i< n; i++) cout << B[i] << " ";
			cout << endl;
	}
	return 0;
}