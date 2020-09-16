#include <iostream>
#include <algorithm>
#include <cmath>
#include <ios>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    long long t,k;
    string s;
    cin >> t;
    while(t--){
        cin.ignore();
        cin >> s;
        cin >> k;
        long long res = 0;
        for (int i = 0; i< s.size(); i++)
            res = (res*10 + (int)(s[i] - '0'))%k;
        cout << res;
        cout << endl;
    }   
    return 0;
}

