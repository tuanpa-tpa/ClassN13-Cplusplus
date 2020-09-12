#include <iostream> 
#include <cmath>
using namespace std; 
int main (){
    int t,n,k;  
    cin>>t;
    while(t--){
        cin >> n >> k; 
        int d=0,res = -1; 
        for(int i=2;i<=sqrt(n);i++){
            while(n%i==0){
                d++; 
                if(d==k){
                    res=i; 
                    break; 
                } 
            n/=i; 
            } 
            if(res>0) break; 
        } 
        if(n>1){
            d++;
            if(d==k) res = n; 
        } 
    cout << res;
    cout<<endl;  
    } 
    return 0; 
}