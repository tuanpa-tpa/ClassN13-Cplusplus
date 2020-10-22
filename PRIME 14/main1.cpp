// #include <iostream>
// #include <cstring>
// #include <cmath>
#include <bits/stdc++.h>
using namespace std;

class solution{
    private:
        bool check(int n){
            if (n <= 1) return false;
            if (n <= 3) return true;
            if (n%2 == 0 || n%3 == 0) return false;
            for (int i = 5; i*i <= n; i+= 6) {
                 if (n%i == 0 || n%(i+2) == 0) return false;
            }
         return true;
        }
    public:
        bool ThreeDistinct(long long n){
            if (check(n)) return true;
            return false;
        }
};
int main() {
	int t;
	cin >> t;
	while(t--){
	    long long n;
	    cin >> n;
	    solution tdf;
        for (int i = 1; i<= sqrt(n); i++)
	       if (tdf.ThreeDistinct(i)) cout << i*i << " ";
	    cout << endl;
	}
	return 0;
}