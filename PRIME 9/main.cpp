#include <iostream> 
#include <cmath>
using namespace std; 
int main(){
    int t,n,k,d;  
    cin >> t;
    while(t--){
        cin >> n; 
        for(int i= 2;i <= sqrt(n); i++){
            d=0;bool kt = false;
            while(n%i==0){
                d++;
                kt = true;
                n/=i; 
            } 
            if (kt) cout << i << " " << d << " ";
        } 
        d = 0;
        if(n > 1){
            d++;
            cout << n << " 1";
        } 
    cout << endl;  
    } 
    return 0; 
}