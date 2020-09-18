#include <iostream>
#include <cmath>
#include <ios>
using namespace std;

bool kt(int n){
    if (n<2) return false;
    for (int i = 2; i<= sqrt(n); i++){
        if (n % i == 0) return 0;
    }
    return true;
}
int ucll(int a, int b){
    if (a == 0) return b;
    return ucll(a%b,a);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t,x,count;
    cin >> t;
    while (t--){
        count = 0;
        cin >> x;
        for (int i = 1; i<=x ; i++)
            if (ucll(i,x) == 1) count++;
        if (kt(count)) cout << "1";
        else cout << "0" ;
        cout << endl;
    }
    return 0;
}