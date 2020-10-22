// #include <iostream>
// #include <string>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        long long t = 0;
        while (s.size() > 1){
            t = 0;
            for (int i = 0; i< s.size();i++)
            t+= (int)(s[i] - '0');

            s = to_string(t);
        }
        int temp = s[0] - '0';
        if (temp % 9 == 0 && temp != 0) cout << 1;
        else cout << 0;
        cout << endl;
    }
    return 0;
}