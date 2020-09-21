#include <bits/stdc++.h>
using namespace std;
int main(){
	int t = 1;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int A[n];
		long long B[n];
		for (int i = 0; i< n; i++) cin >>  A[i];
		B[0] = A[0]*A[1];
		B[n-1] = A[n-1]*A[n-2];
		for (int i = 1; i< n-1; i++){
			B[i] = A[i-1]*A[i+1];
		}
		for (int i = 0; i< n; i++) cout << B[i] << " ";
		cout << endl;
	}
	return 0;
}