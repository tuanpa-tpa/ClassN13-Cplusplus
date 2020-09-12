#include <iostream>
#include <ios>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        int A[n+1];
        for (int i = 1; i <= n; i++){
            cin >>  A[i];
        }
        // for (int i = 1; i <= n; i++){
        //     cout << A[i] << " ";
        // }
        int MIN = 1e9,MINs=1e9; bool kt = false;
        for (int i = 1; i <= n; i++){
            if (A[i] <= MIN) MIN = A[i];
        }
        for (int i = 1; i <= n; i++){
            if (MIN == A[i]) continue;
            if (MINs >= A[i]) {
                MINs = A[i];
                kt = true;
            }
        }
        if (!kt) cout << "-1";
        else cout << MIN << " " << MINs;
        cout << endl;
    }
    return 0;
}