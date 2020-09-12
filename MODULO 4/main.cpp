#include <iostream>
#include <algorithm>
#include <cmath>
#include <ios>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    long long t,n,k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        long long s = 0;
        for (int i = 1; i<= n; i++){
            s+= i%k;
        }
        if (s == k) cout << "1";
        else cout << "0";
        cout << endl;
    }   
    return 0;
}

