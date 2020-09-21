#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		string s;
		cin.ignore();
		int A[123] = {0};
		cin >> s;
		int max = 0;
		for (int i = 0; i< s.size();i++){
			A[s[i]]++;
			if (A[s[i]] > max) max = A[s[i]];
		}
		cout << max << endl;
		if (max > (s.size() - max)) cout << 0;
		else cout << 1;
		cout << endl;
	}
	return 0;
}