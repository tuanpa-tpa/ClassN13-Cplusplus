#include <iostream>
#include <algorithm>
#include <ios>
using namespace std;

int main(){
    int t,n,k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        int A[n+1];
        for (int i = 1; i<= n; i++) cin >>  A[i];
        int l,r;
        for (int i = 1; i<=k; i++){
            cin >> l >> r;
            long tong = 0;
            for (int j = l;j<=r; j++) tong+= A[j];
            cout << tong << endl;
        }
        // cout << endl;
    }   
    return 0;
}

