#include <iostream>
#include <ios>
#include <cmath>
#include <cstring>
using namespace std;
class solution{
public:
	int n;
	void input(){
		cin >> n;
	}
	void Prime9(){
		int temp = 0;
		while(n%2 == 0){
			n/=2;
			temp++;
		}
		if (temp > 0) cout << 2 << " " << temp << " ";
		for (int i = 3; i<= sqrt(n); i+=2){
			temp = 0;
			while(n%i == 0){
				temp ++;
				n/=i;
			}
			if (temp > 0) cout << i << " "<< temp << " ";
		}
		if (n > 2) cout << n << " " << 1;
		cout << endl;
	}
	
};

int main(){
	solution ob;
	int t;
	cin >> t;
	while(t--){
		ob.input();
		ob.Prime9();
	}
	return 0;
}