#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int A[n];
		for (int i = 0; i< n; i++) cin >> A[i];
		long long s,max = A[0];
		s = A[0];
		for (int i = 1; i < n; i++){
			s += A[i];
			if (max < s) max = s;
			if (s < 0) s = 0;
		}
		cout << max;
		cout << endl;
	}
	return 0;
}