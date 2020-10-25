#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int A[n];
        for (int i = 0; i< n; i++) cin >> A[i];
        int d,c;
        for (d = 0; d < n-1; d++){
            if (A[d] > A[d+1]) break;
        }
        for (c = n-1; c > 0; c--){
            if (A[c-1] > A[c]) break;
        }
        // cout << d << " " << c << endl;
        int MIN = A[d],MAX = A[d];
        for (int i = d+1; i <= c; i++){
            MIN = min(MIN,A[i]);
            MAX = max(MAX,A[i]);
        }
        // cout << MIN << " " << MAX << endl;
        for (int i = 0; i<= d; i++){
            if (A[i] > MIN){
                d = i;
                break;
            }
        }
        for (int i = n-1; i>= c+1; i--){
            if (A[i] < MAX){
                c = i;
                break;
            }
        }
        cout << d+1 <<" " << c+1 << endl; 
    }
    return 0;
}