#include <bits/stdc++.h>
using namespace std;
unsigned long long gcd(long long a, long long b){
	if (a == 0) return b;
	return gcd(b%a,a);
}

int main(){
	int t = 1;
	cin >> t;
	while(t--){
		long long x = 2,y = 3 ,z = 5,n = 4;
		cin >> x >> y >> z >> n;
		long long tmp = (x*y)/gcd(x,y);
		tmp = (tmp*z)/gcd(tmp,z);
		// cout << tmp << endl;
		if (tmp > pow(10,n)) cout << "-1";
		else {
			long long k = pow(10,n-1);
			if (k % tmp == 0){
				long long temp = k/tmp;
				cout << temp*tmp;
			} else {
				long long temp = k/tmp+1;
				cout << tmp*temp;
			}
		}
		cout << endl;
	}
	return 0;
}