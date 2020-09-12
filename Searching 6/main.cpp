#include <iostream>
#include <ios>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        int A[n+1];
        for (int i = 0; i < n; i++){
            cin >>  A[i];
        }
        int MIN = 1e6;
        for (int i = 0; i< n-1;i++){
            for(int j =i+1; j < n; j++){
                if (abs(MIN) > abs(A[i]+A[j])) MIN = A[i] + A[j];
            }
        }
        cout << MIN;
        cout << endl;
    }
    return 0;
}