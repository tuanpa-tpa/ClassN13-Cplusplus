#include <iostream>
#include <cstring>
using namespace std;
bool A[10005];

void sangNt(){
    for (int i = 2; i<= 1e4; i++){
        if (A[i]){
            for (int j = i*2 ; j<= 1e4; j+= i){
                A[j] = false;
            }
        }
    }
}

int main(){
    int t;
    unsigned long n;
    memset(A,true,sizeof(A));
    A[0] = false;A[1] = false;
    sangNt();
    // for (int i = 2; i <= 1e4; i++) if (A[i]) cout << i << " ";
    cin >> t;
    while(t--){
        cin >> n;
        for (int i = 2; i<= n; i++) if (A[i]) cout << i << " "; 
        cout << endl;
    }
    return 0;
}