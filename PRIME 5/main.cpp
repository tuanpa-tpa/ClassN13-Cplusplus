#include <iostream> 
#include <cmath>
using namespace std; 
bool A[1000005] = {false};
void sangNT(){
    A[1] = true;
    for (int i = 2; i <= 1e6; i++){
        if (!A[i]){
            for (int j = i*2; j<=1e6; j+= i)
                A[j] = true;
        }
    }
}

int main(){
    int t,n,m;  
    sangNT();
    cin >> t;
    while(t--){
        cin >> n >> m; 
        for (int i = n; i<=m; i++){
            if (!A[i]) cout << i << " ";
        }
        cout << endl;  
    } 
    return 0; 
}