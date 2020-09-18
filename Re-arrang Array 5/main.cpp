#include <bits/stdc++.h>
using namespace std;
int main(){
	int t =1;
	cin >> t;
	while(t--){
		int n = 4;
		cin >> n;
		int A[n];
		for (int i = 0; i< n; i++) cin >> A[i];
		sort(A,A+n,greater<int>() );
		int l = 0,r = n-1;
		while(l <= r){
			if (l == r) cout << A[l];
			else cout << A[l] << " " << A[r] << " ";
			l++;r--;
		}	
		cout << endl;
	}
	return 0;
}