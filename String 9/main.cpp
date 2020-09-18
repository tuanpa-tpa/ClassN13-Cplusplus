#include <bits/stdc++.h>
using namespace std;
int main(){
	int t = 1;
	cin >> t;
	while(t--){
		string s = "100klh564abc365bg",str = "",token;
		cin >> s;
		for (int i = 0; i< s.size();i++){
			if (isdigit(s[i])){
				str += s[i];
			} else str += " ";
		}
		int max = 0;
		stringstream ss(str);
		while(ss >> token){
			int temp = stoi(token);
			if (temp > max) max = temp;
		}
		cout << max << endl;
	}
	return 0;
}