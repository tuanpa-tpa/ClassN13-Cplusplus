#include <iostream>
#include <algorithm>
#include <ios>
#include <string>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t,k;string s;
    cin >> t;
    while(t--){
        int A[130] = {0};
        cin.ignore();
        getline(cin ,s);
        cin >> k;
        if (s.size() >= 26){
            for (int i = 0; i< s.size();i++){
            int temp = (int)(s[i]);
            A[temp]++;
        }
        int d =0;
        for (int i = 97; i<= 122; i++) if (A[i] != 0) d++;
        if ((26-d) <= k) cout << "1"; else cout << "0";

        } else cout << "0";
        
        cout << endl;
    }
    return 0;
}