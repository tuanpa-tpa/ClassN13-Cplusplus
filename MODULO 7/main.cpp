#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int A[n];
        int Ma =-INT_MAX,Mi = INT_MAX;
        for (int i = 0; i< n; i++){
            cin >> A[i];
            Ma = max(Ma,A[i]);
            Mi = min(Mi,A[i]);
        }
        int d = Ma-Mi;
        vector<int> v;
        for (int i = 1; i*i <= d; i++){
            if (d%i == 0){
                v.push_back(i);
                if (i != d/i){
                    v.push_back(d/i);
                }
            }
        }
        int res = 0;
        for (int i = 0; i< v.size(); i++){
            int temp = A[0]%v[i];
            int j = 0;
            for (j = 1; j< n; j++){
                if (A[j]%v[i] != temp) break;
            }
            if (j == n) res++;
        }
        cout << res << endl;
    }

    return 0;
}