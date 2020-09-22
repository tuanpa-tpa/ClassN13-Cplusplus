#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		string s;
		cin.ignore();
		getline(cin,s);
		int A[58] = {0};
		for (int i = 0; i< s.size(); i++){
			A[s[i]]++;
		}
		for (int i = 48; i<= 57; i++)
			if (A[i] > 0) cout << i -48 << " ";
		cout << endl;
	}
	return 0;
}