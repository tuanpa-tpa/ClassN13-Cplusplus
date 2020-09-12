#include <iostream>
#include <ios>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t,n,x;
    cin >> t;
    while(t--){
        cin >> n;
        x = 1;
        int A[n+1];
        for (int i = 1; i <= n-1; i++){
            cin >>  A[i];
        }
        for (int i = 1; i <= n-1; i++){
            if (A[i] == x) {
                x++;
            } else {
                cout << x;
                break;
            }
        }
        cout << endl;
    }
    return 0;
}