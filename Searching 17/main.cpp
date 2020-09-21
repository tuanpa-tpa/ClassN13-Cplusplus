#include <bits/stdc++.h>
using namespace std;
int main(){
	int t =1 ;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		int A[n];
		int min = 0,tmp,d =1;
		for (int i = 0; i< n; i++){
			cin >> A[i];
		}
		sort(A,A+n);
		// for (int i = 1; i< n; i++){
		// 	if (A[i-1] != A[i]) d++;
		// 	if (d == k){
		// 		cout << A[i];
		// 		break;
		// 	}
		// }
		cout << A[k-1];
		cout << endl;
	}
	return 0;
}