#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(0);cin.tie(0);
    int n,temp,k,t;
    int A[100005];
    cin >> t;
    while (t--){
        int n,k;
        cin >> n >> k;
        for (int i = 1; i<= n; i++){
            cin >> A[i];
        }
        sort(A+1,A+n+1);
        while(A[n] - A[1] > k) n--;
        if (A[n]- A[1] < k){
            cout << n*(n-1)/2;
        } else {
            int temp = n,d =0,res = 0;
            while(A[temp] - A[1] == k) {
                temp--;
                d++;
            }
            res = temp*(temp-1)/2;
            // cout << res << endl;
            // cout << temp << " "<< n << endl;
            for (int i = temp+1 ; i<= n; i++){
                for (int j = 1; j<= i-1;j++)
                    if (A[i] - A[j] < k) 
                        res++;
            }
            cout << res;
        }  
        cout << endl;
    }
    return 0;
}