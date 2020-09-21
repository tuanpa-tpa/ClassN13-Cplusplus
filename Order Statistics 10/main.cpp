#include <bits/stdc++.h>
using namespace std;
int main(){
	int t,A[1005],B[1005];
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		for (int i = 0 ; i<n; i++) cin >> A[i];
		B[0] = 1;
		for (int i = 1; i< n; i++){
			B[i] = 1;
			for (int j = 0 ; j< i; j++)
				if (A[j] < A[i] && B[i] < B[j]+1)
					B[i] = B[j]+1;
		}
		int *max = max_element(B,B+n);
		cout << *max << endl;
	}
	return 0;
}