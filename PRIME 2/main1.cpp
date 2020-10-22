#include <iostream>
#include <ios>
#include <cmath>
using namespace std;
class solution{
private:
	long n;
public:
	solution(long _n){
		n = _n;
	}
	long Prime2(){
		long temp;
		while (n%2 == 0){
			n/=2;
			temp = 2;
		}
		for (int i = 3; i<= sqrt(n); i+=2){
			while(n%i ==0){
				temp = i;
				n/=i;
			}
		}
		if (n > 2) temp = n;
		return temp;
	}
	
};
int main(){
	int t;
	cin >> t;
	while(t--){
		long n;
		cin >> n;
		solution ob = solution(n);
		cout << ob.Prime2() << endl;
	}
	return 0;
}