#include <iostream>
#include <cmath>
#include <ios>
using namespace std;
const long M = 1e9+7;
bool chinhPhuong(unsigned long long n){
    unsigned long long temp = sqrt(n);
    return (temp*temp == n);
} 
bool check(unsigned long long n){
    return (chinhPhuong(5*n*n+4) || chinhPhuong(5*n*n-4));
}
int main(){
    int t;
    unsigned long long int n;
    cin >> t;
    while(t--){
        cin >> n;
        if (check(n) && n>=0) cout << "Yes";
        else cout << "No";
        cout << endl;
    }   
    return 0;
}
  



// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
// using namespace std;
// int main() {
//     int t;
//     cin >> t;
//     while( t-- ){
//         long long n;
//         cin >> n;
//         double cp = sqrt(5.0*n*n+4.0);
//         long long icp = cp;
//         if( cp == icp ){
//             cout << "YES" << endl;
//         }
//         else{
//             cp = sqrt(5.0*n*n-4.0);
//             icp = cp;
//             if( cp == icp ){
//                 cout << "YES" << endl;
//             }
//             else{
//                 cout << "NO" << endl;
//             }
//         }
//     }
//     return 0;
// }