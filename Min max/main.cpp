#include <iostream>
using namespace std;
int main(){
    int s,d,t;
    // cin >> t;
    // while(t--){
        cin >> d >> s;
        int temp = s,n;
        if (s < 1 || d < 1 || s > 9*d){
            cout << "-1 -1" << endl;
        } else {
            // min
        int A[105] = {0};
        n = d-1;
        A[0] = 1; s--;
        while(s > 8){
            A[n] = 9;
            n--;
            s -= 9;
        }
        A[n] += s;
        for (int i = 0; i< d;i++) cout << A[i];
        cout << " ";
        // max
        int B[105] = {0};
        n = 1;
        if (temp >= 9){
            B[0] = 9; temp-=9;
        } else {
            B[0] = temp;
            temp = 0;
        }
        while(temp > 8){
            B[n] = 9;
            n++;
            temp -= 9;
        }
        B[n] += temp;
        for (int i = n+1; i<d; i++) B[i] = 0;
        for (int i = 0; i< d;i++) cout << B[i];
        cout << endl;
        }
        
    // }
    
}