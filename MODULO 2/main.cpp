#include <iostream>
#include <algorithm>
#include <cmath>
#include <ios>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t,a,m;bool kt = false;
    cin >> t;
    while(t--){
        cin >> a >> m;
        for (int i = 0; i<m;i++){
            if ((a*i)%m == 1){
                cout << i;
                kt = true;
                break;
            }
        }
        if (!kt) cout << "-1";
        cout << endl;
    }   
    return 0;
}

