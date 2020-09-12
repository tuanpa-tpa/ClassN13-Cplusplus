#include <iostream>
#include <algorithm>
#include <ios>
#include <cmath>
#include <string>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t;string s;
    cin >> t;
    while(t--){
        long long temp = 0;
        cin.ignore();
        cin >> s;
        int n = s.size()-1;
        for (int i= 0; i<= s.size()-1; i++){
            if (s[i] == '1')
                temp += pow(2,n);
            n--;
        }
        cout << temp << endl;
        // if (temp % 5 == 0) cout << "Yes";
        // else cout << "No";
        cout << endl;
    }
    return 0;
}