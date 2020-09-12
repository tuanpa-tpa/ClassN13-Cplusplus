#include <iostream>
#include <cmath>
using namespace std;
const long long M = 1e9+7;
int t,n;
void fibonaci(){
    unsigned long long A = 0,B = 1,C;
    while (n--){
        C = (A+B)%M;
        B = A;
        A = C;
    }
    cout << C;
}

int main(int argc, const char * argv[]) {
    cin >> t;
    while (t--) {
        cin >> n;
        fibonaci();
        cout << endl;
    }
    return 0;
}
