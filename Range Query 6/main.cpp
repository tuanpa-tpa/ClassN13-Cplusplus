#include <bits/stdc++.h>
using namespace std;

class solution{
    private:
        int n;
        int A[1001];
        long MAX;
    public:
        friend istream &operator>>(istream &is,solution &obj){
            is >> obj.n;
            for (int i  = 0; i< obj.n; i++){
                is >> obj.A[i];
            }
            return is;
        }
        friend ostream &operator<<(ostream &os,solution obj){
            cout << obj.MAX;
            return os;
        }
        void Range6();
};
    void solution::Range6(){
        int B[1001];
        MAX =A[0];
        for (int i = 0; i< n; i++){
            B[i] = A[i];
        }
        for (int i = 1; i< n; i++){
            for (int j = 0; j< i; j++){
                if (A[i] > A[j] && B[i] < B[j]+A[i]){
                    B[i] = B[j]+A[i];
                    if (MAX < B[i]) MAX = B[i];
                }
            }
        }
        // for (int i = 0; i< n; i++){
        //     // cout << B[i] << " ";
        //     if (MAX < B[i]) MAX = B[i];
        // }
    }

// 2
// 7
// 1 101 2 3 100 4 5
// 4
// 10 5 4 3
// 1 102 2 6 106 7 15

int main(){
    int t;
    cin >> t;
    while(t--){
        solution ob;
        cin >> ob;
        ob.Range6();
        cout << ob << endl;
    }
    return 0;
}