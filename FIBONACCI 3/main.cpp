#include <bits/stdc++.h>
using namespace std;
// set<int> se;
bool A[1005] = {false};
void fiboSet(){
	int a = 0, b =1;
	A[0] = true;
	A[1] = true;
	// se.insert(a);
	// se.insert(b);
	while(b <= 1000){
		int c = a+b;
		a =b;
		b = c;
		// se.insert(b);
		A[b] = true;
	}
}

int main(){
	fiboSet();
	int t;
	cin >> t;
	while(t--){
		int n, temp;
		// int A[n];
		cin >> n;
		for (int i = 0; i< n; i++){
			cin >> temp;
			// if (se.find(temp) != se.end()){
			if (A[temp]){
				cout << temp << " ";
			}
		}
		cout << endl;
	}
	return 0;
}