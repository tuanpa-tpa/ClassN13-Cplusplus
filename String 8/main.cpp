#include <bits/stdc++.h>
using namespace std;
int main(){
	int t = 1;
	string s,token,str = "";
	cin >> t;
	while(t--){
		long long tong = 0;
		cin >> s;
		str = "";
		vector <string> vt;
		vt.clear();
		// s = "123bbss12bh12";
		for (int i = 0; i< s.size(); i++)
			if (isdigit(s[i])){
				str += s[i];
			} else {
				// str+= '\0';
				// if (str != "") tong += stoi(str);

				str += " ";
			}

			// cout << str;
		stringstream ss(str);
		while (ss >> token){
			vt.push_back(token);
		}
		// long long tong = 0;
		for (int i = 0; i< vt.size();i++){
			tong += stoi(vt[i]);
		}
		cout << tong;
		cout << endl;
	}
	return 0;
}