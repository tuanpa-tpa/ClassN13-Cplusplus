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
        unsigned long long A[n+1];
        for (int i = 0; i< n; i++) cin >>  A[i];
        int d= 0;
        for (int i = 0; i< n; i++) {
            if (A[i] != 0) cout << A[i] << " ";
            else d++;
        }
        for (int i = 1; i<= d; i++) cout << "0 ";
        cout << endl;
    }   
    return 0;
}

