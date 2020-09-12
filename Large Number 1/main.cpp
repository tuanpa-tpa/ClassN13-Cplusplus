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

void operatorSub(vector<int> v1,vector<int> v2,vector<int> &v3){
    int max = v1.size();
    v2.resize(max);
    int du = 0,tmp;
    for (int i = 0; i< max; i++){
        if(v1[i] < (v2[i] + du)){
            v3.push_back(v1[i]- v2[i] - du + 10);
            du = 1;
        } else {
            v3.push_back(v1[i] - v2[i] - du);
            du = 0;
        }
    }
    // removeZ(v3);
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
        if (s1.size() < s2.size()){
            string tm = s1;
            s1 = s2;
            s2 = tm;
        } else if (s1.size() == s2.size()){
            if (s1[0] < s2[0]){
                string tm = s1;
                s1 = s2;
                s2 = tm;
            }
        }
        convertS(s1,v1);
        convertS(s2,v2);
        // res(v1);
        operatorSub(v1,v2,v3);
        res(v3);
        cout << endl;
        // res(v2);
    }
    return 0;
}