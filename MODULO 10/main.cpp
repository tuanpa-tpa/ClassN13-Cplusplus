#include <bits/stdc++.h>
using namespace std;
const long long M = 1e9+7;
long long power(long long x, long long y){
	long long res = 1;
	// x = x%M;
	if (x == 0) return 0;
	while(y > 0){
		if (y & 1)
			res = res*x;
		y/=2;
		x = x*x;
	}
	return res;
}


int main(){
	int t;
	cin >> t;
	while(t--){
		long long n,x;
		long long res = 0;
		cin >> n >> x;
		long long A[n+1];
		long long temp = n,tmp;
		for (int i = 1; i<= n; i++){
			cin >> A[i];
		}
		// temp = 0;
		long long pow = 1;
		for (int i = n; i>=1; i--){
			// res += A[i]*power(x,temp);
			res = (res + A[i]*pow)%M ;
			pow = (pow*x)%M;
		}
		
		cout << res;
		cout << endl;
	}
	return 0;
}