#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		vector<int> v;
		int n,temp;
		cin >> n;
		for(int i = 0; i< n; i++){
			cin >> temp;
			v.push_back(temp);
		}
		set<int> s(v.begin(),v.end());
		set<int>::iterator it;
		for (int i = 0; i< v.size(); i++){
			it = s.upper_bound(v[i]);
			if (it != s.end()){
				cout << *it << " ";
			} else {
				cout << "_ ";
			}
		}
		cout << endl;
	}
	return 0;
}