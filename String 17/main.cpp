#include <iostream>
#include <algorithm>
#include <ios>
#include <string>
#include <sstream>
#include <cstring>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t;string s,token;
    cin >> t;
    cin.ignore();
    while(t--){
        // unsigned long long A[130] = {0};
        // memset(A,0,sizeof(A));
        // getline(cin,s);
        // // cin >> s;
        // for (int i = 0; i<s.size();i++) {
        //     int tmp = (int)(s[i]);
        //     A[tmp]++;
        // }
        // for (int i = 33; i<= 126; i++){
        //     if (A[i] == 1) cout << (char)(i);
        // }
        getline(cin,s);
        for (int i = 0; i< s.size();i++){
            int count = 1;
                if (s[i] == ' ') continue;
            for (int j = i+1;j<s.size();j++){
                if (s[i] == s[j]) {
                    count++;
                    s[j] = ' ';
                }
            }
            if (count == 1) cout << s[i];
        }
        cout << endl;
    }
    return 0;
}