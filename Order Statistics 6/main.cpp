#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int A[n],B[n+1],C[n];
        for (int i = 0; i < n; i++){
            cin >> A[i];
        }
        // tim mang cac phan tu MAX
        B[n] = INT_MIN;
        for (int i = n-1; i >= 0; i--){
            B[i] = max(B[i+1],A[i]);
        }
        // tim mang cac phan tu min
        C[0] = A[0];
        for (int i = 1; i < n; i++){
            C[i] = min(C[i-1],A[i]);
        }
        // duyet 2 mang B C
        int i = 0, j = 0;
        int res = 0;
        while( i < n &&  j< n){
            if (C[i] < B[j]){
                res = max(res,j-i);
                j++;
            } else {
                i++;
            }
        }
        cout << res << endl;
    }
    return 0;
}