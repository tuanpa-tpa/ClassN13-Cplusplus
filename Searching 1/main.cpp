#include <iostream>
#include <ios>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t,n,x,temp;
    bool check;
    cin >> t;
    while(t--){
        check = false;
        cin >> n >> x;
        int A[n+1];
        for (int i = 1; i <= n; i++){
            cin >>  A[i];
        }
        for (int i = 1; i <= n; i++){
            if (A[i] == x) {
                cout << i;
                check = true;
                break;
            }   
        }
        if (!check) cout << "-1";
        cout << endl;
    }
    return 0;
}