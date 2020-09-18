#include <bits/stdc++.h>
using namespace std;

unsigned long long amodM (string s,long long m){
	unsigned long long tmp = 0;
	for (int i = 0 ; i < s.size();i++){
		tmp = (tmp*10 + s[i] - '0');
		tmp %= m;
	}
	return tmp;
}

unsigned long long kq(string &s,long long b, long long m){
	unsigned long long temp = amodM(s,m);
	unsigned long long nul = temp;
	for (long long i = 1; i< b; i++){
		temp = (nul*temp)%m;
	}
	return temp;
}


int main(){
	int t = 1;
	cin >> t;
	while(t--){
		string a = "987584345091051645734583954832576";
		cin >> a;
		long long b = 3,m = 11;
		cin >> b >> m;
		cout << kq(a,b,m) << endl;
	}
	return 0;
}