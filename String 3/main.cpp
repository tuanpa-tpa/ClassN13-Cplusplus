#include <iostream>
#include <algorithm>
#include <ios>
#include <cmath>
#include <string>
using namespace std;

int converBase4(string s){
    if (s == "00") return 0;
    if (s == "01") return 1;
    if (s == "10") return 2;
    return 3;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t;string s;
    cin >> t;
    while(t--){
        long long temp = 0;
        cin.ignore();
        cin >> s;
        if (s.size() % 2 != 0) s = '0' + s;
        int odd_sum= 0,even_sum = 0;
        bool isodddigit = true;
        for (int  i = 0; i< s.size(); i+=2){
            if (isodddigit) odd_sum += converBase4(s.substr(i,2));
            else even_sum += converBase4(s.substr(i,2));
            isodddigit = !isodddigit;
        }
         if ((odd_sum - even_sum) % 5 == 0) cout << "Yes";
         else cout << "No";
        cout << endl;
    }
    return 0;
}
