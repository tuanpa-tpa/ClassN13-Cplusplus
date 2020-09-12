#include <iostream> 
#include <cmath>
using namespace std; 
bool kt(int n){
    int d;
    int i = 2;
        while(n >= 2){
            d = 0;
            while (n % i == 0){
                d++;
                n/=i;
            }
            if (d >= 2) return false;
            i++;
        }
    return true;
}
int main(){
    int t,n,m;  
    cin >> t;
    while(t--){
        cin >> n; 
        if (kt(n)) cout << "1";
        else cout << "0";
        cout << endl;  
    } 
    return 0; 
}