#include <iostream>
#include <ios>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t,n,x,temp;
    cin >> t;
    while(t--){
        cin >> n >> x;
        int A[n+1];
        for (int i = 1; i <= n; i++){
            cin >>  A[i];
        }
        if (x >= A[1]) {
            for (int i = 1; i<= n; i++){
                if (x == A[i]) {
                    cout << i;
                    break;
                }
            }
        } else {
            for (int i = n; i>= 1; i--){
                if (x == A[i]) {
                    cout << i;
                    break;
                }
            }
        }
        cout << endl;
    }
    return 0;
}