#include <iostream>
using namespace std;
int t,n,A[25];
bool kt;
void xuat(){
    for (int i = 0; i< n; i++) cout << A[i];
    cout << " ";
}
void sinh(){
    int i = n-1;
    while (A[i] == 1 && i >=0) i--;
    if (i < 0) kt = false;
    else {
        A[i] = 1;
        for (int j = i+1; j< n; j++) A[j] = 0;
    }
}

int main(){
    cin >> t;
    while(t--){
        cin >> n;
        for (int i = 0; i< n; i++) A[i] =0;
        kt = true;
        while(kt){
            xuat();
            sinh();
        }
        cout << endl;
    }
    return 0;
}
