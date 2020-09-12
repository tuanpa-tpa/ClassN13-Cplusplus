#include <iostream>
#include <cmath>
using namespace std;
unsigned long long int x,y,p;
unsigned long long int power(unsigned long long int a, unsigned long long int b){
    if (b == 0) return 1;
    unsigned long long int tmp = power(a,b/2);
    if (b%2 == 0) return tmp*tmp%p;
    else return a*(tmp*tmp%p)%p;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> x >> y >> p;
        // unsigned long long int tmp = 1;
        // for (int i = 1; i<=y; i++){
        //     tmp = tmp*x;
        // }
        // cout << tmp%p << endl;
        cout << power(x,y) << endl;
    }
    return 0;
}