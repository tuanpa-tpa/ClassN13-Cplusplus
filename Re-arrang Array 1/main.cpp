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
        int A[n+1],B[1];
        for (int i = 0; i< n; i++) cin >>  A[i];
        int MAX = -1e9;
        for (int i = 0; i< n; i++){
            if (A[i] > MAX) MAX = A[i];
        }
        cout << endl;
    }   
    return 0;
}

