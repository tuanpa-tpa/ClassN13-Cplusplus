#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t,n,tmp,k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        int A[n*n];
        for (int i = 0; i< n*n; i++){
            cin >> A[i];
        }
        sort(A,A+n*n);
        cout << A[k-1];
        cout << endl;
    }   
    return 0;
}

