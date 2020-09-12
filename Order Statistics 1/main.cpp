#include <iostream>
#include <algorithm>
#include <ios>
using namespace std;

int main(){
    int t,k,n;
    cin >> t;
    while(t--){
        cin >> n >> k;
        int A[n+1];
        for (int i = 0; i< n; i++) cin >>  A[i];
        sort(A,A+n);
        cout << A[k-1];
        cout << endl;
    }   
    return 0;
}

