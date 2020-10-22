#include <iostream>
#include <cmath>
using namespace std;

class solution{
private:
	long n;
public:
	solution(long _n){
		n = _n;
	}
	void Prime1(){
		for (int i = 2; i<= sqrt(n); i++){
			while(n%i == 0){
				cout << i << " ";
				n/=i;
			}
		}
		if (n > 1) cout << n;
		cout << endl;
	}
	// ~solution();
};

int main(){
	int t;
	cin >> t;
	while(t--){
		long n;
		cin >> n;
		solution ob = solution(n);
		ob.Prime1();
	}
	return 0;
}