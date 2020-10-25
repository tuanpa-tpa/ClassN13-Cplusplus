#include <bits/stdc++.h>
using namespace std;
int main(){
	int t =1 ,n,l,r;
	cin >> t;
	while (t--){
		cin >> n;
		int A[n+1];
		for (int i = 0;i < n; i++) cin >> A[i];
		cin >> l >> r;
		int d = l,c=r;
		while(A[d] < A[d+1]) d++;
		while(A[c-1] > A[c]) c--;
		if (d >= c ) cout <<"Yes";
		else cout << "No";
		cout << endl;
	}
	return 0;
}