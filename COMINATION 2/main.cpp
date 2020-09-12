#include <iostream>
using namespace std;
int t,n,A[25],k;
bool kt;
void xuat(){
    for (int i = 1; i<= k; i++) cout << A[i];
    cout << " ";
}
void sinh(){
    int i = k;
    while(n-k+i == A[i]) i--;
    if (i <= 0) kt = false;
    else {
        A[i]++;
        for (int j = i+1; j<=k; j++) A[j]= A[j-1]+1;
    }
}

int main(){
    cin >> t;
    while(t--){
        cin >> n >> k;
        for (int i = 1; i<= k; i++) A[i] =i;
        kt = true;
        while(kt){
            xuat();
            sinh();
        }
        cout << endl;
    }
    return 0;
}
