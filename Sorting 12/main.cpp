#include <iostream>
#include <algorithm>
#include <cmath>
#include <ios>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t,n,k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        long A[n+1],B[k+1];
        for (int i = 0; i< n; i++) cin >>  A[i];
        for (int i = 0; i< k; i++) cin >>  B[i];
        sort(A,A+n);sort(B,B+k);
        cout << A[n-1]*B[0];
        cout << endl;
    }   
    return 0;
}

