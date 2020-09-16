#include <iostream>
#include <algorithm>
#include <cmath>
#include <ios>
using namespace std;
typedef long long int ll;
ll dc(ll a,ll b,ll c){
    if (b == 0) return 0;
    ll x = dc(a,b/2,c);
    if (b%2 == 1) return (a%c+2*(x%c))%c;
    else return (2*x%c)%c;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    ll a,b,c,t;
    cin >> t;
    while(t--){
        cin >> a >> b >> c;
        cout << dc(a,b,c);
        cout << endl;
    }   
    return 0;
}

