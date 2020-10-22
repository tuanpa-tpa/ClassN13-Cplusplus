#include <iostream>
#include <string>
#include <sstream>
using namespace std;
class solution{
private:
	string s1,s2;
public:
	solution(string _s1, string _s2){
		s1 = _s1;
		s2 = _s2;
	}
	void Lbxc(){
		string temp;
		// cout << s2 << " ";
		istringstream ss(s1);
		while(ss >> temp){
			if (temp != s2) cout << temp << " ";
		}
		cout << endl;
	}
};
int main(){
		string s1,s2;
		getline(cin, s1);
		// cin.ignore();
		getline(cin, s2);
		solution ob = solution(s1,s2);
		ob.Lbxc();
	return 0;
}