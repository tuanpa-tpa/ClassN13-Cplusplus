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
        cin >> n;
        int A[n+1];
        for (int i = 0; i< n; i++) cin >>  A[i];
        sort(A,A+n);
        int MIN = 1e6;
        for (int i = 1; i< n; i++){
            if (abs(MIN) > abs(A[i]-A[i-1])) MIN = abs(A[i]-A[i-1]);
        }
        cout << MIN;
        cout << endl;
    }   
    return 0;
}

