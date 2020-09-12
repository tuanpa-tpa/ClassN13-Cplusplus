#include <iostream>
#include <algorithm>
#include <ios>
#include <string>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t;string s;
    cin >> t;
    while(t--){
        int c=0,l=0;
        cin.ignore();
        cin >> s;
        for (int i= 0; i< s.size(); i++){
            int temp = (int)(s[i]-'0');
            if (i % 2 == 0){
                c+= temp;
            } else l+=temp;
        }
        if (abs(c-l)%11 == 0) cout << "1";
        else cout << "0";
        cout << endl;
    }
    return 0;
}