#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <cctype>
using namespace std;
int main(){
    string s,token;
    vector<string> vs; 
    getline(cin , s);
    for (int i = 0; i< s.size();i++) 
        s[i] = tolower(s[i]);
    istringstream ss(s);
    while(ss >> token){
        vs.push_back(token);
    }
    for (int i = 0; i< vs.size() -1; i++){
        int temp = vs[i].size();
        for (int j = 0; j<temp;j++){
            if (j == 0) {
                vs[i][j] = toupper(vs[i][j]);
                cout << vs[i][j];
            }
            else cout << vs[i][j];
        }
        if (i < vs.size()-2) cout << " ";
    }
    cout << ", ";
    int tmp = vs[vs.size()-1].size();
    for (int j = 0; j< tmp; j++){
        vs[vs.size()-1][j] = toupper(vs[vs.size()-1][j]);
    }
    cout << vs[vs.size()-1];
    return 0;
}