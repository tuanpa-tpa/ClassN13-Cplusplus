#include <iostream>
#include <string>
#include <vector>
using namespace std;
void removeZ(vector<int> &v){
    while(v[v.size()-1] == 0 && v.size() > 1) v.pop_back(); 
}

void convertS(string s, vector<int> &v){
    for (int i = s.size()-1; i>=0; i--){
        int temp = (int)(s[i]-'0');
        v.push_back(temp);
    }
    removeZ(v);
}

void operatorAdd(vector<int> v1,vector<int> v2,vector<int> &v3){
    int max = v1.size() < v2.size() ? v2.size() : v1.size();
    v1.resize(max);
    v2.resize(max);
    int du = 0,tmp;
    for (int i = 0; i< max; i++){
        tmp = v1[i] + v2[i] + du;
        v3.push_back(tmp % 10);
        du = tmp /10;
    }
    if (du > 0) v3.push_back(du);
}

void operatorMul(vector<int> v1,vector<int> v2,vector<int> &v3){
    for (int i = 0; i< v1.size(); i++){
        vector<int> v4;
        int du = 0,tmp;
        for (int j = 0; j< v2.size();j++){
            tmp = v1[i]*v2[j]+du;
            v4.push_back(tmp%10);
            du = tmp/10;
        }
        if (du > 0) v4.push_back(du);
        for (int j = 0; j<i; j++)
            v4.insert(v4.begin(),0);
        operatorAdd(v3,v4,v3);
    }
}


void res(vector<int> v){
    for (int i = v.size()-1;i>=0;i--){
            cout << v[i];
    }
}

int main(){
    int t;string s1,s2;
    vector<int> v1,v2,v3;
    cin >> t;
    while(t--){
        v1.clear();v2.clear();v3.clear();
        cin >> s1;
        cin >> s2;
        convertS(s1,v1);
        convertS(s2,v2);
        operatorMul(v1,v2,v3);
        res(v3);
        cout << endl;
    }
    return 0;
}