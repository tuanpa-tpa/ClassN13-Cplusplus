#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,A[10] ={0};
		string s;
		cin >> n >> s;
		for (int i = 0; i< s.size(); i++){
			if (s[i] == '2'){
				A[2]++;
			} else if (s[i] == '3'){
				A[3]++;
			} else if (s[i] == '4'){
				A[3]++;
				A[2]+=2;
			} else if (s[i] == '5'){
				A[5]++;
			} else if (s[i] == '6'){
				A[5]++;
				A[3]++;
			} else if (s[i] == '7'){
				A[7]++;
			} else if (s[i] == '8'){
				A[7]++;
				A[2]+=3;
			} else if (s[i] == '9'){
				A[7]++;
				A[3]+=2;
				A[2]++;
			} 
		}
		for (int i = 9; i>=0;i--)
			if (A[i]){
				while(A[i]){
					cout << i;
					A[i]--;
				}
			}		
		cout << endl;
	}
	return 0;
}