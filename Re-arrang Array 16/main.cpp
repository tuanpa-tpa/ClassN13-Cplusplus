#include <bits/stdc++.h> 
using namespace std; 
string check(string str) 
{ 
    int len = str.size(); 
    int index = -1; 
    for (int i = len - 2; i >= 0; i--) { 
        if (str[i] > str[i+1]) { 
            index = i; 
            break; 
        } 
    }  
    int index2 = -1; 
    for (int i = len - 1; i > index; i--) { 
        if (str[i] < str[index]) { 
            if (index2 == -1) 
                index2 = i; 
            else if (str[i] >= str[index2]) 
                index2 = i; 
        } 
    } 
    if (index == -1) 
        return "-1"; 
    if (index2 != -1){ 
        swap(str[index], str[index2]); 
        return str; 
    } 
    return "-1"; 
} 
int main() { 
    int t;
    cin >> t;
    while(t--){
    	string s;
    	cin >> s;
    	cout << check(s) << endl;
    }
    return 0; 
} 