#include <iostream>
#include <string>
#include <cctype>
#include <sstream>
using namespace std;
class solution{
private:
	string s1;
public:
	solution(string _s1){
		s1 = _s1;
	}
	void email(){
		string token,temp,first= "";
		istringstream ss(s1);
		while(ss >> token){
			temp = token;
			first+= tolower(token[0]);
		}
		for (int i = 0; i< temp.size(); i++){
			temp[i] = tolower(temp[i]);
			cout << temp[i];
		}
		for (int i = 0; i< first.size()-1; i++){
			cout << first[i];
		}
		cout << "@ptit.edu.vn";
	}
};
int main(){
		string s1;
		getline(cin, s1);
		solution ob = solution(s1);
		ob.email();
	return 0;
}