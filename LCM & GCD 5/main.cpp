#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b){
	if (a == 0) return b;
	return gcd(b%a,a);
}

int main(){
	int t = 1;
	cin >> t;
	while(t--){
		long long a = 123 ,x = 5,y = 2;
		cin >> a >> x >> y;
		long long tmp = gcd(x,y);
		for (int i = 0; i< tmp; i++) 
			cout << a;
		cout << endl;
	}
	return 0;
}