#include <bits/stdc++.h>
using namespace std;
int main(){
	long long t,n;
	cin >> t;
	while(t--){
		cin >> n;
		long long A[1000001],B[1000001];
		memset(B,-1,sizeof(B));
		for (int i = 0; i< n; i++){
			cin >> A[i];
		}
		for (int i = 0; i< n; i++){
			for (int j = 0; j< n; j++){
				if (A[j] == i) B[i] = i;
			}
		}
		for (int i = 0; i< n; i++){
			cout << B[i] << " ";
		}
		cout << endl;
	}
	return 0;
}