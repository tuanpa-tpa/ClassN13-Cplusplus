#include <iostream>
#include <algorithm>
#include <ios>
#include <string>
#include <sstream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t;string s,token;
    cin >> t;
    while(t--){
        int c=0,l=0;
        cin.ignore();
        getline(cin,s);
        stringstream ss(s);
        int d = 0;
        while (ss >> token){
            // cout << token << " ";
            d++;
        }
        cout << d;
        cout << endl;
    }
    return 0;
}