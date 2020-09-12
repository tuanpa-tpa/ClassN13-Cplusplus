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
        for (int i = 0; i < n; i++){
            cin >>  A[i];
        }
        sort(A, A+n, greater <int> () );
        for (int i = 0; i<k ;i++) cout << A[i] << " ";
        cout << endl;
    }
    return 0;
}