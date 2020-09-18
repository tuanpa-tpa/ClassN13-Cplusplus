#include <bits/stdc++.h>
using namespace std;
int A[10001];
int d = 0;
bool ktnt(int n){
	for (int i = 2; i<=sqrt(n);i++)
		if (n % i == 0) return false;
	return true;
}

void sangNT(int n){
	for (int i = 2; i<= n; i++){
		if (ktnt(i)) {
			A[d] = i;
			d++;
		}
	}
}

// cach khac -> sang nt xong kt i la so nt va n-i la so nt

int main(){	
	int t = 1;
	cin >> t;
	while(t--){
		d = 0;
		int n = 1024;
		cin >> n;
		sangNT(n);
		for (int i = 0; i<d; i++){
			bool kt = false;
			for (int j =i; j< d; j++){
				if (A[i] + A[j] == n){
					cout << A[i] <<" " << A[j];
					kt = true;
					break;
				}
			}
			if (kt) break;
		}
		
 		cout << endl;
	}
	return 0;
}