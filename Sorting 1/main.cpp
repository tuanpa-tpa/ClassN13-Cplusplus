#include <iostream>
#include <algorithm>
#include <ios>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t,n,A[1005];
    cin >> t;
    while(t--){
        cin >> n;
        for (int i = 0; i< n; i++) cin >> A[i];
        sort(A,A+n);
        int i= 0,j=n-1;
        while(i <= j){
            if (i == j) cout << A[i];
            else 
                cout << A[j] << " " << A[i] << " ";
            j--;i++;
        }
        cout << endl;
    }
    return 0;
}