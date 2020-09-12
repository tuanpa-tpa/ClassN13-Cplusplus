#include <iostream>
// #include <cstring>
#include <algorithm>
#include <cmath>
using namespace std;

bool kt(int n){
    if (n < 2) return false;
    for (int i = 2; i<= sqrt(n); i++) if (n % i == 0) return false;
    return true;
}

int main(){
    // bool A[1000005];
    // memset(A,false,sizeof(A));
    int a,b;
    cin >> a >> b;
    if (a > b) swap(a,b);
    // A[0] = true;A[1]= true;
    // for (int i = 2; i<= b; i++){
    //     if (!A[i]){
    //         for (int j = i*2 ; j<= b; j+= i){
    //             A[j] = true;
    //         }
    //     }
    // }
    for (int i = a; i<= b; i++)
        if (kt(i)) cout << i << " ";
    return 0;
}