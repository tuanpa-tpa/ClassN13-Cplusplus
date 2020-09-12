#include <iostream>
#include <ios>
using namespace std;
int main(){
    int t,n,d1,d2,temp;
    cin >> t;
    while(t--){
        cin >> n;
        d1 = 0;d2 =0;
        for (int i = 0; i< n; i++){
            cin >> temp;
            if (temp == 0) cout << 0 << " ";
            if (temp == 1) d1++;
            if (temp == 2) d2++;
        }
        for (int i = 0; i< d1; i++) cout << "1 ";
        for (int i = 0; i< d2; i++) cout << "2 ";
        cout << endl;
    }
    return 0;
}