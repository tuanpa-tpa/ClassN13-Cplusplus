#include <bits/stdc++.h>
using namespace std;

class solution{
    protected:
        int n;
        int A[101];
    public:
        void input(){
            cin >> n;
            for (int i = 0; i < n; i++){
                cin >> A[i];
            }
        }
        int Rearray();
        int Rearray12();
        
};
    int solution::Rearray(){
        long long res = 0,s = 0;
        for (int i = 0; i< n; i++){
            s = 1;
            for (int j = i; j< n; j++){
                if (A[i] == 0) break;
                s *= A[j];
                res = max(s,res);
            }
        }
        return res;
    }
    int solution::Rearray12(){
        int MIN=1,MAX=1,res = 1;
        bool check = false;
        for (int i = 0; i< n; i++){
            if (A[i] > 0){
                check = true;
                MAX = MAX*A[i];
                MIN = min(1,MIN*A[i]);
            } else if (A[i] == 0) {
                MIN = 1;
                MAX = 1;
            } else if (A[i] < 0){
                int temp = MAX;
                MAX = max(1,MIN*A[i]);
                MIN = temp*A[i];
            }
            if (res < MAX){
                res = MAX;
            }
        }
        if (check == false && res == 1) return 0;
        return res;
    }
int main(){
    int t;
    cin >> t;
    while(t--){
        solution ob;
        ob.input();
        cout << ob.Rearray() << endl;
    }
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin >> t;
//     while (t--){
//         int n;
//         cin >> n;
//         int A[n];
//         for (int i = 0; i< n; i++){
//             cin >> A[i];
//         }
//         long long res = 0,s = 0;
//         for (int i = 0; i< n; i++){
//             s = 1;
//             for (int j = i; j< n; j++){
//                 if (A[i] == 0) break;
//                 s *= A[j];
//                 res = max(s,res);
//             }
//         }
//         cout << res << endl;
//     }
//     return 0;
// }