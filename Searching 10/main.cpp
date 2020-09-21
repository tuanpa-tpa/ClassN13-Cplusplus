#include <bits/stdc++.h>
using namespace std;
bool A[1000005] ={false};

void sangNt(){
	A[0] =true; A[1] = true;
	for (int i = 2; i<= 1e6;i++){
		if (!A[i]){
			for (int j = i*2; j<= 1e6;j+=i)
				A[j] = true;
		}
	}
}

int main(){
	int t;
	sangNt();
	cin >> t;
	while(t--){
		int n;bool kt = false;
		cin >> n;
		for (int i = 2; i<= n; i++){
			if (!A[i]){
				if (!A[n-i]){
					cout << i << " " << n-i;
					kt = true;
					break;
				}
			}
		}
		if (!kt) cout << -1;
		cout << endl;
	}
	return 0;
}