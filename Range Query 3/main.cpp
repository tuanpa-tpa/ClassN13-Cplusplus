#include <bits/stdc++.h>
using namespace std;
bool A[100001] = {false};
void sangNT(){
	A[1] = true;
	for (int i = 2;i <= 1e5; i++){
		if (!A[i]){
			for (int j = i*2; j<= 1e5; j+=i)
				A[j] = true;
		}
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int t;
	sangNT();
	cin >> t;
	while(t--){
		int l,r;
		cin >> l >> r;
		int d =0;
		for (int i = l; i<= r; i++){
			if (!A[i]) d++;
		}
		cout << d;
		cout << endl;
	}
	return 0;
}