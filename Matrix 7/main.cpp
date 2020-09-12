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
        int d;
        for (int i = 1; i<=n; i++){
            for(int j = 1; j<= n; j++)
                cin >> A[i][j];
        }
        for (int i = 1; i<=n; i++){
            if (i % 2 ==0){
                for (int j = n; j>=1; j--) 
                    cout << A[i][j] << " ";
            } else {
                for (int j = 1; j<=n; j++) 
                    cout << A[i][j] << " ";
            }
        }
        cout << endl;
    }
    
    return 0;
}