#include <bits/stdc++.h>
using namespace std;

class solution{
    private:
        int n,m;
        int A[105][105];
    public:
        void input(){
            cin >> n >> m;
            for (int i = 0; i< n; i++){
                for (int j = 0; j< m ; j++){
                    cin >> A[i][j];
                }
            }
        }
        void Matrix3(){
            int hang = 0,cot =0;
            while(hang < n && cot < m){
                for (int i = cot ; i< m ; i++){
                    cout << A[hang][i] << " ";
                }
                hang++;
                for (int i = hang; i< n; i++){
                    cout << A[i][m-1] << " ";
                }
                m--;
                if (m > hang){
                    for (int i = m-1; i>= cot; i--){
                        cout << A[n-1][i] << " ";
                    }
                    n--;
                }
                if (n > cot){
                    for (int i = n-1; i>= hang; i--){
                        cout << A[i][cot] << " ";
                    }
                    cot++;
                }
            }
        }
};


int main(){
    int t;
    cin >> t;
    while(t--){
        solution ob;
        ob.input();
        ob.Matrix3();
        cout << endl;
    }
    return 0;
}