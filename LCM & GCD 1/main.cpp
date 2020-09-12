#include <iostream>
#include <algorithm>
using namespace std;
unsigned long UCLN(unsigned long a, unsigned long b){
    if (a < b) swap(a,b);
    while (b != 0){
        unsigned long t = a%b;
        a = b;
        b = t;
    }
    return a;
}

int main(){
    int t;
    unsigned long a,b;
    cin >> t;
    while(t--){
        cin >> a >> b;
        unsigned long tmp = UCLN(a,b);
        cout << (a*b)/tmp << " "<< tmp << endl;
    }
    return 0;
}