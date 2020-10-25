#include <bits/stdc++.h>
using namespace std;

int solution(string s, int k){
    int res = 0;
    int check[123] = {0};
    for (int i = 0; i< s.size(); i++){
        memset(check,0,sizeof(check));
        int d = 0;
        for (int j = i; j< s.size(); j++){
            if (check[s[j]] == 0){
                d++;
            }
            check[s[j]]++;
            if (d == k) res++;
            if (d > k) break;
        }
    }
    return res;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int k;
        string s;
        cin >> s >> k;
        cout << solution(s,k) << endl;
    }
    return 0;
}