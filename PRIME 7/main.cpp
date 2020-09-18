#include <bits/stdc++.h>
using namespace std; 
bool kt(int n){
    int d = 0,tmp = 0;
    int i = 2;
        while(n >= 2){
            bool kt = false;
            while (n % i == 0){
                kt = true;
                tmp ++;
                n/=i;
            }
            if (kt) d++;
            // if (kt)
                // cout << d << " " << i << endl;
            i++;
        }
    return (d == 3 && tmp == 3);
}
int main(){
    int t = 1;  
    cin >> t;
    while(t--){
        int n = 60;
        cin >> n; 
        if (kt(n)) cout << "1";
        else cout << "0";
        cout << endl;  
    } 
    return 0; 
}