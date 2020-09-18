#include <bits/stdc++.h>
using namespace std;
bool A[10001] = {false};
void sangNT(int n){
	A[1] = true;
	for (int i = 2; i <= n; i++){
		if (!A[i]){
			for (int j = i*2; j<= n; j+=i){
				A[j] = true;
			}
		}
	}
}

int main(){
	int t = 1;
	cin >> t;
	while(t--){
		int n = 10;
		cin >> n;
		sangNT(n);
		for (int i = 1; i<= n; i++){
			if (i == 1) cout << "1 ";
			else 
			if (A[i]){
				if (i%2 == 0) cout <<"2 ";
				else {
					for (int j = 3; j<= i;j++)
						if (i % j == 0){
							cout << j<<" ";
							break;
						}
				}
			} else cout << i << " ";
		}
		cout << endl;
	}
	return 0;
}