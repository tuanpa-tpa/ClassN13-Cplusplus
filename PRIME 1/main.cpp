#include <iostream>
#include <cmath>
using namespace std;
void primeFactors(unsigned long long n) 
{ 
    // unsigned long long MAX = 2;
    while (n%2 == 0) { 
        cout << 2 << " ";
        n = n/2; 
    }
    for (int i = 3; i <= sqrt(n); i = i+2) { 
        while (n%i == 0) { 
            cout << i << " ";
            // if (i > MAX) MAX = i;
            n = n/i; 
        } 
    } 
    if (n > 2) 
    // return MAX;
        cout << n << " ";
} 
int main(){
    int t;
    unsigned long long n;
    cin >> t;
    while(t--){
        cin >> n;
        // unsigned long long i = 2,temp =2;
        primeFactors(n);
        cout << endl;
    }
    return 0;
}