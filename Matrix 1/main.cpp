#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n,m;
        cin >> n >> m;
        int A[n][m];
        // input
        for (int i = 0; i< n; i++){
            for (int j = 0; j< m; j++){
                cin >> A[i][j];
            }
        }
        // xu ly
        int m1= m,n1 = n;
        int hang = 0,cot = 0,data,temp;
        while(hang < n && cot < m){
            if (hang+1 == n || cot + 1 == m) break;

            temp = A[hang+1][cot];
            for (int i = cot; i< m; i++){
                data = A[hang][i];
                A[hang][i] = temp;
                temp = data;
            }
            hang++;
            for (int i = hang; i< n; i++){
                data = A[i][m-1];
                A[i][m-1] = temp;
                temp = data;
            }
            m--;
            if (m > cot){
                for (int i = m-1;i>= cot; i--){
                    data= A[n-1][i];
                    A[n-1][i] = temp;
                    temp = data;
                }
            }
            n--;
            if (n > hang){
                for (int i = n-1; i>= hang; i--){
                    data = A[i][cot];
                    A[i][cot] = temp;
                    temp = data;
                }
            }
            cot++;
        }
        for (int i = 0; i< n1; i++){
            for (int j = 0; j< m1; j++){
                cout << A[i][j] << " ";
            }
            // cout << endl;
        }
        cout << endl;
    }    
    return 0;
}