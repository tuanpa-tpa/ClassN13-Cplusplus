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
        long A[1000000];
        for (int i = 0; i< n; i++) cin >>  A[i];
        for (int i = n; i< k+n; i++) cin >>  A[i];
        sort(A,A+n+k);
        for (int i = 0; i< n+k; i++) cout << A[i] << " ";
        cout << endl;
    }   
    return 0;
}

