#include <bits/stdc++.h>
using namespace std;

class solution{
public:
	string String21_1(string s){
		string res = "";
		vector<char> vchar;
		vector<int> vdigit;
		for (int i = 0; i< s.size();i++){
			if (isdigit(s[i])) vdigit.push_back(s[i]-'0');
			else vchar.push_back(s[i]);
		}
		int sum = 0;
		for (int i = 0; i< vdigit.size(); i++){
			sum += vdigit[i];
		}
		sort(vchar.begin(),vchar.end());
		for (int i = 0; i< vchar.size(); i++){
			res+= string(1,vchar[i]);
		}
		res += to_string(sum);
		return res;
	}
};

int main(){
	int t = 1;
	cin >>t;
	while(t--){
		string s = "ACCBA10D2EW30";
		cin >> s;
		solution ob;
		cout << ob.String21(s);
		cout << endl;
	}
	return 0;
}