#include <iostream>
#include <ios>
#include <cmath>
#include <cstring>
using namespace std;
class solution{
public:
	int n,k;
	void input(){
		cin >> n >> k;
	}
	void Prime12(){
		int temp = 0;
		bool check = false;
		while(n%2 == 0){
			n/=2;
			temp++;
			if (temp == k){
				cout << 2;
				check = true;
				break;
			}
		}
		if (!check){
			for (int i = 3; i<= sqrt(n); i+=2){
				check = false;
				while(n%i == 0){
					temp ++;
					if (temp == k){
						cout << i;
						check = true;
						break;
					}		
					n/=i;
				}
				if (check) break;
			}
			if (!check){
				if (n > 2 && (temp+1) == k) cout << n;
				else cout << "-1";	
			}
		}
		cout << endl;
	}
	
};

int main(){
	solution ob;
	int t;
	cin >> t;
	while(t--){
		ob.input();
		ob.Prime12();
	}
	return 0;
}