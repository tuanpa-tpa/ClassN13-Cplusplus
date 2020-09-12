#include <iostream>
#include <ios>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t,n,k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        int A[n+1];
        int B[1000000] = {0};
        for (int i = 0; i < n; i++){
            cin >>  A[i];
            B[A[i]]++;
        }
        if (B[k] > 0) cout << B[k];
        else cout << "-1";
        cout << endl;
    }
    return 0;
}