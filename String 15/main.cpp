#include <iostream>
#include <ios>
#include <string>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t;string s;
    cin >> t;
    while(t--){
        cin >> s;
        unsigned long long d = 0;
        for (int i = 0; i< s.size(); i++){
            for (int j = i; j< s.size(); j++){
                if (s[i] == s[j]) d++;
            } 
        }
        cout << d;
        cout << endl;
    }
    return 0;
}
// aaaaatyabcdd