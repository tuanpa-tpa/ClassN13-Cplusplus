#include <iostream>
#include <cmath>
using namespace std;
unsigned long long primeFactors(unsigned long long n) 
{ 
    unsigned long long MAX = 2;
    while (n%2 == 0) { 
        n = n/2; 
    }
    for (int i = 3; i <= sqrt(n); i = i+2) { 
        while (n%i == 0) { 
            if (i > MAX) MAX = i;
            n = n/i; 
        } 
    } 
    if (n > 2) if (n > MAX) MAX = n;
    return MAX;
} 
int main(){
    int t;
    unsigned long long n;
    cin >> t;
    while(t--){
        cin >> n;
        // unsigned long long i = 2,temp =2;
        cout << primeFactors(n) << endl;
    }
    return 0;
}