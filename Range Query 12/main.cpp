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
        int k = 0,d = 0,c= 0;
        for (int i = 0; i< n; i++){
            int d = 0,sum1 = 0,sum2 =0;
            for (int j = i; j<n; j++){
                sum1+=A[j];
                sum2+=B[j];
                d++;
                if(sum1 == sum2) k = max(d,k);
            }
        }
        cout << k << endl;
    }   
    return 0;
}
  