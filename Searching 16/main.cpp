#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,m,k;
		cin >> n >> m >> k;
		int A[n],B[m],C[k];
		for (int i = 0; i < n; i++)
			cin >> A[i];
		for (int i = 0; i < m; i++)
			cin >> B[i];
		for (int i = 0; i < k; i++)
			cin >> C[i];
		std::vector<int> v1(1000005),v2(1000005);
		std::vector<int>::iterator it;
		it = std::set_intersection(A,A+n,B,B+m,v1.begin());
		v1.resize(it- v1.begin());
		it = std::set_intersection(v1.begin(),v1.end(),C,C+k,v2.begin());
		v2.resize(it- v2.begin());
		sort(v2.begin(),v2.end());
		if (v2.empty()) cout << "-1";
		else{
			for (int i = 0; i< v2.size(); i++){
				cout << v2[i] << " ";
			}
		} 
		cout << endl;
	}
	return 0;
}