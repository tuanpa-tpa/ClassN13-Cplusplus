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
unsigned long BCNN(unsigned long a, unsigned long b){
    return a*b/UCLN(a,b);
}
int main(){
    int t;
    unsigned long n;
    cin >> t;
    while(t--){
        cin >> n;
        unsigned long tmp = 1;
        for (int i = 1; i<=n ; i++){
            tmp = BCNN(tmp,i);
        }
        cout << tmp << endl;
    }
    return 0;
}