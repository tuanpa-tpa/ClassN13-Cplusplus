#include <bits/stdc++.h>
using namespace std;

// int A[] = {2, 3, 5, 7, 13, 17, 19,31};
// set <long long> B = {6,28,496,8128,33550336,8589869056,137438691328,2305843008139952128};
// void check(){
// 	for (int i = 0; i<=7; i++){
// 		int x = A[i];
// 		B[i] = pow(2,x-1)*(pow(2,x)-1);
// 	}
// 	for (int i = 0; i<= 7; i++)
// 		cout << B[i] << " ";
// }
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int t;
	// check();
	long long B[] = {6,28,496,8128,33550336,8589869056,137438691328};
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		int i = 0;
		while(i <= 6){
			if (B[i] == n){
				cout << 1;
				break;
			}
			i++;
		}
		if (i > 6) cout << 0;
		cout << endl;
	}
	return 0;
}