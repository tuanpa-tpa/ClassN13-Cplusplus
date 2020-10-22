#include <iostream>
using namespace std;

class solution{
	public:
		int n,p;
		solution(int _n, int _p){
			n = _n;
			p = _p;
		}
		int Prime8(){
			int x= 0;
			while(n){
				n/=p;
				x+=n;
			}
			return x;
		}
};

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,p;
		cin >> n >> p;
		solution pr = solution(n,p);
		cout << pr.Prime8() << endl;
	}
	return 0;
}