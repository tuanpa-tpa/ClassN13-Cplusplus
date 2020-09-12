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
        unsigned long long A[n*k+1];
        for (int i = 0; i< n*k; i++) cin >>  A[i];
        int d= 0;
        sort(A,A+n*k);
        for (int i = 0; i< n*k; i++) cout <<A[i]<< " ";
        cout << endl;
    }   
    return 0;
}

