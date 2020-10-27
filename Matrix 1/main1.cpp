#include <bits/stdc++.h>

class solution{
    private:
        int n,m,n1,m1;
        int A[105][105];
    public:
        void input(){
            cin >> n >> m;
            for (int i = 0; i< n; i++){
                for (int j = 0; j< m; j++){
                    cin >> A[i][j];
                }
            }
            n1 = n,m1 = m;
        }
        void Matrix1(){
            // int hang = 0, cot = 0;
            // int temp,data;
            // while(hang < n && cot < m){
            //     if (hang +1 == n || cot+1== m) break;
            //     temp = A[hang+1][cot];
            //     for (int i = cot ; i< m; i++){
            //         data = A[hang][i];
            //         A[hang][i] = temp;
            //         // cout << temp << " ";
            //         temp = data;
            //     }
            //     hang++;
            //     for (int i = hang ; i< n; i++){
            //         data = A[i][m-1];
            //         A[i][m-1] = temp;
            //         // cout << temp << " ";
            //         temp = data;
            //     }
            //     m--;
            //     if (cot < m){
            //         for (int i = m-1 ; i >= cot; i--){
            //             data = A[n-1][i];
            //             A[n-1][i] = temp;
            //             // cout << temp << " ";
            //             temp = data;
            //         }
            //     }
            //     n--;
            //     if (n < hang){
            //         for (int i = n-1; i >= hang; i--){
            //             data = A[i][cot];
            //             A[i][cot] = temp;
            //             // cout << temp << " ";
            //             temp = data;
            //         }
            //     }
            //     cot++;
            // }
            int hang = 0,cot = 0,data,temp;
        while(hang < n && cot < m){
            if (hang+1 == n || cot + 1 == m) break;

            temp = A[hang+1][cot];
            for (int i = cot; i< m; i++){
                data = A[hang][i];
                A[hang][i] = temp;
                temp = data;
            }
            hang++;
            for (int i = hang; i< n; i++){
                data = A[i][m-1];
                A[i][m-1] = temp;
                temp = data;
            }
            m--;
            if (m > cot){
                for (int i = m-1;i>= cot; i--){
                    data= A[n-1][i];
                    A[n-1][i] = temp;
                    temp = data;
                }
            }
            n--;
            if (n > hang){
                for (int i = n-1; i>= hang; i--){
                    data = A[i][cot];
                    A[i][cot] = temp;
                    temp = data;
                }
            }
            cot++;
        }
        }
        void output(){
            for (int i = 0; i< n1; i++){
                for (int j = 0; j< m1; j++){
                    cout << A[i][j] << " ";
                }
            }
        }
};


using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        solution ob;
        ob.input();
        ob.Matrix1();
        ob.output();
        cout << endl;
    }
    return 0;
}