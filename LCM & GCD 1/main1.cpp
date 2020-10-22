#include <iostream>
#include <algorithm>
using namespace std;
#define ull unsigned long long
class solution{
public:
	ull GCD(ull a,ull b){
		if (a == 0) return b;
		return GCD(b%a,a);
	}
	ull LCM(ull a, ull b, ull temp){
		return a*b/temp;
	}
};

int main(){
	int t;
	cin >> t;
	while(t--){
		ull a,b;
		cin >> a >> b;
		// solution lg;
		ull temp = std::__gcd(a,b);
		cout <<  a*b/temp << " " << temp << endl;
	}
	return 0;
}