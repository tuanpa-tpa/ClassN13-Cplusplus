#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main(){
    string s1,s2,t;
    getline(cin , s1);
    getline(cin , s2);
    stringstream ss(s1);
    while(ss >> t){
        if (t != s2) cout << t << " "; 
    }
    return 0;  
}