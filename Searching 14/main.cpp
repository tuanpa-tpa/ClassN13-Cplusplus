// #include <iostream>
// #include <ios>
// #include <algorithm>
// #include <cmath>
// using namespace std;
// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);cout.tie(0);
//     int t,n;
//     cin >> t;
//     while(t--){
//         cin >> n;
//         int A[n+1];
//         for (int i = 0; i < n; i++){
//             cin >>  A[i];
//         }
//         bool kt = false;
//         for (int i = 0; i< n;i++){
//             for(int j =0; j < i; j++){
//                 if (A[i] == A[j]) {
//                     cout << A[i];
//                     kt = true;
//                     break;
//                 }
//             }
//             if (kt) break;
//         }
//         if (!kt) cout << "-1";
//         cout << endl;
//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        int A[n],B[1000001] = {0};
        bool kt = false;
        for (int i = 0; i < n; i++){
            cin >>  A[i];
        }
        for (int i = 0; i < n; i++){
            B[A[i]]++;
            if (B[A[i]] >= 2) {
                cout << A[i];
                kt = true;
            }
            if (kt) break;
        }
        if (!kt) cout << "-1";
        cout << endl;
    }
    return 0;
}