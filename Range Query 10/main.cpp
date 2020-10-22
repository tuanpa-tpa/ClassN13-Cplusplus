#include <bits/stdc++.h>
using namespace std;
#define M 10001;
class solution{
    private:
        int n;
        int d;
        int A[10001];
    public:
        // solution(){
        //     n = d = 0;
        // }
        // ~solution(){
        //     n = d = 0;
        // }
        friend istream &operator>>(istream &is, solution &obj){
            is >> obj.n;
            for (int i = 0; i < obj.n; i++){
                is >> obj.A[i];
            }
            return is;
        }
        friend ostream &operator<<(ostream &os, solution obj){
            os << obj.d;
            return os;
        }
        void input();
        void output();
        void Range10();
}; 
    void solution::input(){
        cin >> n;
        for (int i = 0; i< n; i++){
            cin >> A[i];
        }
    }
    void solution::output(){
        for (int i = 0; i< n; i++){
            cout << A[i] << " ";
        }
    }
    void solution::Range10(){
        int i = 0,j= n-1;
        // cout << j << endl;
        d = 0;
        while(i <= j){
            if (A[i] < A[j]){
                i++;
                d++;
                A[i] += A[i-1];
            } else if (A[i] > A[j]){
                j--;
                d++;
                A[j] += A[j+1];
            } else {
                i++;j--;
            }
        }
            // cout << d << " ";
    }

int main(){
    int t;
    cin >> t;
    while(t--){
        solution ob;
        cin >> ob;
        // ob.input();
        ob.Range10();
        // ob.output();
        cout << ob;
        cout << endl;
    }
    return 0;
}