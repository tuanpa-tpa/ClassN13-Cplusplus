#include <iostream>
#include <string>
#include <cctype>
#include <sstream>
using namespace std;
int main(){
    string s,token,temp;
    char A[10];
    getline(cin,s);
    stringstream ss(s);
    int d =0;
    while(ss >> token){
        temp = token;
        A[d] = tolower(token[0]);
        d++;
    }
    for (int i = 0; i < temp.size();i++){
        temp[i] = tolower(temp[i]);
        cout << temp[i];
    }
    for (int i = 0; i<d-1; i++) cout << A[i];
    cout <<"@ptit.edu.vn";
    return 0;
}