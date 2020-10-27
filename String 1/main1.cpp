#include <bits/stdc++.h>
using namespace std;

// class solution{
//     public:
//         string s;
//         int k;
//         solution(string _s,int _k){
//             s = _s;
//             k = _k;
//         }
        bool check(string s, int k){
            if (s.size() < 25) return false;
            int A[26];
            for (int i = 0; i < s.size(); i++){
                A[(int)s[i]-97]++;
            }
            int d = 0;
            for (int i = 0; i <= 25; i++){
                if (A[i] != 0) d++;
            }
            if ( (25-d)+1 <= k) return true;
            return false;
        }
// };

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int start = clock();
        string s;int k;
        // getline(cin >> ws, s);
        // cin >> k;
        cin >> s >> k;
        // cout << solution(s,k).check() << endl;
        cout << check(s,k) << endl;
        int end = clock();
        double temp = ((double)(end-start))/CLOCKS_PER_SEC;
        cout << temp;
    }
    return 0;
}