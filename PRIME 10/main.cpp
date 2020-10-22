#include <iostream>
#include <cmath>
using namespace std;

class solution{
	private:
		bool checkPrime(int n){
			if (n <= 1) return false;
			if (n <= 3) return true;
			if (n%2 == 0 || n%3 == 0) return false;
			for (int i = 5; i*i <= n; i+=6){
				if (n%i == 0 || n%(i+2) == 0) return false;
			}
			return true;
		}
		int sum1(int n){
			int sum = 0;
			while(n){
				sum += n%10;
				n/=10;
			}
			return sum;
		}
		int sum2(int n){
			int sum = 0;
			for (int i = 2; i<= sqrt(n); i++){
				while(n%i == 0){
					sum+= sum1(i);
					n/=i;
				}
			}
			if (n>1) sum+= sum1(n);
			return sum;
		}
	public:
		string prime10(int n){
			if (checkPrime(n)) return "NO";
			return (sum1(n) == sum2(n))? "YES":"NO";
		}
	
};

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		solution pr;
		cout << pr.prime10(n) << endl;
	}

	return 0;
}