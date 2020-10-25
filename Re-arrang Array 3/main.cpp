#include <bits/stdc++.h>
using namespace std;

class solution{
	private:
		int n,d,k,res;
		vector<int> A;
	public:
		solution(){
			d = 0;
			res = 0;
		}
		~solution(){
			d = 0;
			res = 0;
		}
		friend istream &operator>>(istream &is, solution &obj){
			is >> obj.n >> obj.k; 
			int temp;
			for (int i = 0; i< obj.n; i++){
				is >> temp;
				if (temp <= obj.k) obj.d++;
				obj.A.push_back(temp);
			}
			return is;
		}
		friend ostream &operator<<(ostream &os, solution obj){
			os << obj.res;
			return os;
		}
		void xuLy();

};
	void solution::xuLy(){
		int t = 0;
		for (int i = 0; i < d ;i++){
			if (A[i] > k) t++;
		}
		res = t;
		int i = 0, j = d;
		while(j < n){
			if (A[i] > k) t--;
			if (A[j] > k) t++;
			res = min(t,res);
			i++;j++;
		}
	}


int main(){
	int t;
	cin >> t;
	while(t--){
		solution ob;
		cin >> ob;
		ob.xuLy();
		cout << ob << endl;
	}
	return 0;
}