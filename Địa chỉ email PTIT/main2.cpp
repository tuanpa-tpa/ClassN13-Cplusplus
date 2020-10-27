#include <bits/stdc++.h>
using namespace std;
int main(){
    string s,t,res = "",temp;
    getline(cin >> ws,s);
    istringstream ss(s);
    while(ss >> t){
        res += tolower(t[0]); 
    }
    for (int i = 0; i< t.size(); i++){
        cout << (char)tolower(t[i]);
    }
    for (int i = 0; i< res.size()-1;i++){
        cout << res[i];
    }
    cout << "@ptit.edu.vn" ;
    return 0;
}