#include <iostream>
#include <cmath>
#include <ios>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        int A[n+1],B[n+1];
        for (int i = 0; i< n; i++) cin >> A[i];
        for (int i = 0; i< n; i++) cin >> B[i];
        int max = 0,d = 0,c= 0;
        for (int i = 0; i< n; i++){
            int j;
            if (A[i] == B[i]){
                j = i+1;
                while(A[j] == B[j]) j++;
                if ((j-i+1) > max) max = j-i+1;
            }
            i = j-1;
        }
        cout << max << endl;
    }   
    return 0;
}
  