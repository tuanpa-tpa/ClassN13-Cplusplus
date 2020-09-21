#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int t,A[100000],B[100000];
	vector<int>::iterator it;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		for (int i = 0; i< n; i++) cin >> A[i];
		for (int i = 0; i< m; i++) cin >> B[i];
		vector<int> uni(n+m);
		it = std::set_union(A,A+n,B,B+m,uni.begin());
		uni.resize(it - uni.begin());
		for (it = uni.begin(); it != uni.end();it++){
			cout << *it << " ";
		}
		cout << endl;

		vector<int> ins(n+m);
		it = std::set_intersection(A,A+n,B,B+m,ins.begin()); 
		ins.resize(it - ins.begin());
		for (it = ins.begin();it!=ins.end();it++){
			cout << *it << " ";
		}
		cout << endl;
	}
	return 0;
}