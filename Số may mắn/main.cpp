#include <iostream>
#include <string>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.size()-1;
        if (s[n] == '6' && s[n-1] == '8') cout << "1";
        else cout << "0";
        cout << endl;
    }
    return 0;
}