#include <iostream>
#include <algorithm>
#include <ios>
using namespace std;

int main(){
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        int A[n+1];
        for (int i = 0; i< n; i++) cin >>  A[i];
        sort(A,A+n,greater<int>());
        cout << A[0];
        cout << endl;
    }   
    return 0;
}

