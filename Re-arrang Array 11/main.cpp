#include <bits/stdc++.h>
using namespace std;

void tang(int n, int A[105],int B[105]){
    for (int i = 0; i< n;i++){
        B[i] = 1;
    }
    for (int i = 1; i< n; i++){
        for (int j = 0; j< i; j++){
            if (A[i] > A[j] && B[i] < B[j]+1){
                B[i] = B[j]+1;
            }
        }
    }
}
void giam(int n, int A[105],int C[105]){
    for (int i = 0; i< n;i++){
        C[i] = 1;
    }
    for (int i = n-2; i>=0; i--){
        for (int j = n-1; j > i ; j--){
            if (A[i] > A[j] && C[i] < C[j]+1){
                C[i] = C[j]+1;
            }
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        int A[105],B[105],C[105];
        cin >> n;
        for (int i = 0; i< n; i++){
            cin >> A[i];
        }
        // day con tang dai nhat
        tang(n,A,B);
        // day con giam dai nhat
        giam(n,A,C);
        // res = tang max + giam max -1;
        int res = B[0]+C[0]-1;
        for (int i = 1; i< n; i++){
            res = max(res,B[i]+C[i]-1);
        }
        cout << res << endl;
    }
    return 0;
}