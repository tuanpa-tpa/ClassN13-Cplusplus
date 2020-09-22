#include <bits/stdc++.h>
using namespace std;
int main(){
	int t = 1;
	cin >> t;
	while(t--){
		string s = "100";
		cin >> s;
		vector<char> v1;
		vector<long long> v2;
		v1.clear();v2.clear();
		v1.push_back('!');
		v2.push_back(-1);
		long long MAX = 0;
		for (long long i = 0; i< s.size();i++){
			v1.push_back(s[i]);v2.push_back(i);
			while(v1.size()>=3 
				&& v1[v1.size() - 3] == '1'
				&& v1[v1.size() - 2] == '0'
				&& v1[v1.size() - 1] == '0'){
				v1.pop_back();
				v1.pop_back();
				v1.pop_back();
				v2.pop_back();
				v2.pop_back();
				v2.pop_back();
			}
			long long temp = v2.back();
			MAX = max(MAX,i-temp);
		}
		cout << MAX;
		cout << endl;
	}
	return 0;
}
