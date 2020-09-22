#include <bits/stdc++.h>
using namespace std; 
bool A[1000005] = {false};
void sangNT(){
    for (int i = 2; i <= 1e6; i++){
        if (!A[i]){
            for (int j = i*2; j<=1e6; j+= i)
                A[j] = true;
        }
    }
}

int main(){
    int t;  
    sangNT();
    cin >> t;
    while(t--){
        long long l,r,d =0;
        cin >> l >> r; 
        if (l== 1) l =2;
        for (long long i = l; i <= sqrt(r); i++){
            if (!A[i]) d++;
        }
        cout << d;
        cout << endl;  
    } 
    return 0; 
}