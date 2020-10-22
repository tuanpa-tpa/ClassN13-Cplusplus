#include <iostream>
#include <string>
#include <cctype>
#include <sstream>
#include <vector>
using namespace std;
class solution{
private:
	string s1;
public:
	solution(string _s1){
		s1 = _s1;
	}
	void cht(){
		vector<string> vs;
		string token;
		istringstream ss(s1);
		while(ss >> token){
			vs.push_back(token);
		}
		for (int i = 0; i< vs.size()-1; i++){
			for (int j = 0; j< vs[i].size(); j++){
				if (j == 0) vs[i][j] = toupper(vs[i][j]);
				else vs[i][j] = tolower(vs[i][j]);
				cout << vs[i][j];
			}
			if (i < vs.size()-2) cout << " ";
		}
		cout << ", ";
		for (int i = 0; i < vs[vs.size()-1].size(); i++){
			vs[vs.size()-1][i] = toupper(vs[vs.size()-1][i]);
			cout << vs[vs.size()-1][i];
		}
	}
};
int main(){
		string s1;
		getline(cin, s1);
		solution ob = solution(s1);
		ob.cht();
	return 0;
}