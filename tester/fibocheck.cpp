#include <bits/stdc++.h>
using namespace std;
unsigned long long int fibo(int n){
	double tmp = (1+sqrt(5))/2;
	return round(pow(tmp,n)/sqrt(5));
}
int main(){
	int n = 90;
	long long int a = 0, b = 1,c;
	cout << 0 <<"," << 1 << ",";
	int d= 2;
	for (int i = 1; i<= n;i++){
		c = a+b;
		a = b;
		b = c;
		cout << b << ",";
		d++;
	}
	cout << d;
}
