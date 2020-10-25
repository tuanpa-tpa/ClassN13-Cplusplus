// #include <iostream>
// #include <vector>
// #include <map>
// using namespace std;
// #define pt 1000000
// class solution{
//     private:
//         int n,m;
//         vector<int> A,B;
//     public:
//         friend istream &operator >> (istream &is, solution &s){
//             is >> s.n >> s.m;
//             s.A.resize(s.n);
//             s.B.resize(s.m);
//             for (int i = 0; i< s.n; i++) is >> s.A[i];
//             for (int i = 0; i< s.m; i++) is >> s.B[i];
//             return is;
//         }
//         void Rearray13(){
//             map <int,int> ma;
//             map <int,int> ::iterator it;
//             for (int i = 0; i< n; i++){
//                 ma[A[i]]++;
//             }
//             for (int i = 0; i< m ;i++){
//                 for (int j = 0; j< ma[B[i]]; j++){
//                     cout << B[i] << " ";
//                 }
//                 ma.erase(B[i]);
//             }
//             for (it = ma.begin(); it != ma.end(); it++){
//                 for (int j = 0; j< it->second;j++){
//                     cout << it->first << " ";
//                 }
//             }
//         }
// };

// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         solution ob;
//         cin >> ob;
//         ob.Rearray13();
//         cout << endl;
//     }
//     return 0;
// }

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        int A[n],B[m];
        for (int i = 0; i< n; i++) cin >> A[i];
        for (int i = 0; i< m; i++) cin >> B[i];
        sort(A,A+n);
        int temp = A[0]-1;
    for (int i = 0; i< m; i++){
        for(int j = 0; j< n; j++){
            if (B[i] == A[j]){
                cout << A[j] << " ";
                A[j] = temp;
            }
            if (A[j] > B[i]) break;
        }
    }
    for (int i = 0; i< n; i++){
        if (A[i] != temp) cout << A[i] << " ";
    }
        cout << endl;
    }
    return 0;
}

