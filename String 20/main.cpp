#include <iostream>
#include <algorithm>
#include <ios>
#include <string>
#include <sstream>
#include <stack>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t;string s;
    cin >> t;
    cin.ignore();
    while(t--){
        stack<string> st;
        string token;
        getline(cin,s);
        stringstream ss(s);
        while(ss >> token){
            st.push(token);
        }
        while(st.size() > 0){
            cout << st.top() << " ";
            st.pop();
        }
        cout << endl;
    }
    return 0;
}