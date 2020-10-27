#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int chan = 0, le = 0;
        for (int i = 0; i< s.size(); i++){
            int temp = (int)(s[i]-'0');
            if (i%2 == 0) chan += temp;
            else le += temp;
        }
        if (abs(chan - le) % 11 == 0) cout << "1";
        else cout << "0";
        cout << endl;
    }
    return 0;
}