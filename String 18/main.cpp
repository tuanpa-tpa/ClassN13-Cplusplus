#include <bits/stdc++.h>
using namespace std;
int main(){
	int t = 1;
	cin >> t;
	// cin.ignore();
	while(t--){
		int d = 0, check = 0,max = 0;
		string s = "10111000000100";
		cin >> s;
		// cout << s;
		int temp = s.find("100");
		// cout << " "<<temp << endl;
		check = temp+1;

		while(temp >= 0){
			if (temp+1 == check|| check == temp || temp+2 == check) d+=3;
			else d = 0;
			if (max < d) max = d;
			check = temp;
			s.erase (temp,3);   
			temp = s.find("100");
			// cout << s << " " << temp <<endl;
		}
		cout << max;
		cout << endl;
	}
	return 0;
}