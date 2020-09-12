#include <iostream> 
#include <cmath>
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
    int t,n;  
    sangNT();
    cin >> t;
    while(t--){
        cin >> n; 
        for (int i = 2; i<=sqrt(n); i++){
            if (!A[i]) cout << i*i << " ";
            // cout << A[i] << " ";
        }
        cout << endl;  
    } 
    return 0; 
}