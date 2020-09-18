#include <bits/stdc++.h>
using namespace std;

bool nt(int n){
	for (int i = 2; i<= sqrt(n);i++){
		if (n%i == 0) return false;
	}
	return true;
}

int main(){
	int t =1;
	cin >> t;
	while(t--){
		int n = 5;
		cin >> n;
		for (int i = 1; i<= n; i++){
			if (i == 1) cout << "1 ";
			else if (i % 2 == 0) cout << "2 ";
			else {
				for (int j = 3; j<=n; j++){
					if (i % j == 0 && nt(j)){
						cout << j << " ";
						break;
					}
				}
			}
		}
		cout << endl;
	}
	return 0;
}