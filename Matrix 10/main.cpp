#include <iostream>
#include <cmath>
#include <ios>
#include <cstring>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t,n,m;
    cin >> t;
    while(t--){
        cin >> n >> m;
        int A[n+1][m+1],B[n+1][m+1];
        memset(B,0,sizeof(B));
        for (int i = 1; i<= n; i++)
            for (int j = 1; j<= m; j++) 
                cin >> A[i][j];
        for (int i = 1; i<= n; i++){
            int temp = 0;
            for (int j = 1; j<= m; j++) {
                if (A[i][j]){
                    for (int k = 1; k<= n;k++) {
                        B[k][j] = 1;    
                    }
                    if (temp == 0){
                        for (int k = 1; k<= m;k++) {    
                            B[i][k] = 1;
                        }
                    temp = 1;
                    }
                }
            }
        }
        for (int i = 1; i<= n; i++){
            for (int j = 1; j<= m; j++) {
                cout << B[i][j] << " ";
            }
            cout << endl;
        }
        // cout << endl;
    }   
    return 0;
}
  