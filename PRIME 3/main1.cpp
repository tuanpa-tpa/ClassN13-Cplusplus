#include <iostream>
#include <ios>
#include <cmath>
#include <cstring>
using namespace std;
#define MAX 10001

class solution{
public:
	bool A[MAX];
	void eratosthenes(){
		memset(A,false,sizeof(A));
		A[0] = true; A[1] = true;
		for (int i =2; i<= 100; i++){
			if (!A[i]){
				for (int j = i*2; j<= MAX; j+=i){
					A[j] = true;
				}
			}
		}
	}
	int n;
	void input(){
		cin >> n;
	}
	void Prime3(){
		for (int i = 2; i<= n; i++){
			if (!A[i]) cout << i << " ";
		}
		cout << endl;
	}
	
};

int main(){
	solution ob;
	ob.eratosthenes();
	int t;
	cin >> t;
	while(t--){
		ob.input();
		ob.Prime3();
	}
	return 0;
}