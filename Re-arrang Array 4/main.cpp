#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int A[n+1],B[n+1];
		for (int i = 1; i<= n; i++){
			cin >> A[i];
			B[i] = A[i];
		}
		sort(B+1,B+n+1);
		int tmp = 1;
		for (int i = 1; i<=n;i+=2){
			A[i] = B[tmp++];
		}
		for (int i = 2; i<=n;i+=2){
			A[i] = B[tmp++];
		}
		for (int i = 1; i<= n; i++) cout << A[i] << " ";
		cout << endl;
	}
	return 0;
}


// 1 2 3