#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(0);cin.tie(0);
    int n,temp,k,t;
    int A[100005];
    cin >> t;
    while (t--){
        int n,k,res= 0;
        cin >> n >> k;
        for (int i = 1; i<= n; i++){
            cin >> A[i];
        }
        sort(A+1,A+n+1);
        int d = 1;
        for (int i = 2; i<=n;i++)
            if (A[i] - A[0] < k) d++;
            else break;
        // cout << d << endl;
        res= d*(d-1)/2;
        for (int i = d+1; i<=n; i++){
            for (int j = 0; j< i; j++)
                if (A[i] - A[j] < k) res++;
        }
        cout << res;
        cout << endl;
    }
    return 0;
}