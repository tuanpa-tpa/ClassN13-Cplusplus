#include <iostream>
#include <ios>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t,n,A[105][105];
    cin >> t;
    while (t--){
        cin >> n;
        for (int i = 1; i<=n; i++) 
            for (int j = 1; j<=n; j++) 
                cin >> A[i][j];
        for (int i = 1; i<=n; i++) {
            for (int j = 1; j<=n; j++){
                if (i == 1 || i == n) cout << A[i][j];
                else if (j == 1 || j == n) cout << A[i][j];
                else cout << " ";
                cout << " ";
            }
            cout << endl;
        }
    }
    
    return 0;
}