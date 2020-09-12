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
        int A[n+1];
        for (int i = 0; i< n; i++) cin >>  A[i];
        int d =0;
        for (int i = 0; i<n-1;i++){
            for (int j = i+1; j<n; j++){
                if (A[i]+A[j] == k) d++;
            }
        }
        cout << d;
        cout << endl;
    }   
    return 0;
}

