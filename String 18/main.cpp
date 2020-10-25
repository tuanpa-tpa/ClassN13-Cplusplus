#include <bits/stdc++.h>
using namespace std;
int res =0;

void backtrack(string s){
	for (int i = 0; i< s.size(); i++){
		if (s[i] == '1' && s[i+1] == '0' && s[i+2] == '0'){
			res+=3;
			s.erase(i,3);
			backtrack(s);
		}
	}
}

int main(){
	int t = 1;
	cin >> t;
	while(t--){
		string s ,t = "100";
		cin >> s;
		res = 0;
		int p = s.find(t,0);
		while(p != -1){
			res += 3;
			s.erase(p,3);
			p=s.find(t,0);
		}
		cout << res;
		cout << endl;
	}
	return 0;
}
