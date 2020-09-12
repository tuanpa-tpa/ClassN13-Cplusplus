#include <iostream>
#include <ios>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        int d,tong;
        while(true){
            d = 0;
            tong = 0;
            while (n != 0){
                d++;
                tong += n%10;
                n/=10;
            }
            n = tong;
            if (d == 1) break;
        }
        cout << tong;
        cout << endl;
    }
    return 0;
}