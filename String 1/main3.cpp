// #include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        string s;int k;
        getline(cin >> ws,s);
        cin >> k;
        int A[26]={0};
        int n = s.size();
        if (n < 25) cout <<"0";
        else {
            int d = 0;
            if (n/2 % 2 == 0) {
                s.push_back(s[0]);
                A[s[0]-97]++;
                d++;
            }
            for (int i = 0; i< n/2+1; i++){
                if (!A[s[i]-97]){
                    d++;
                    A[s[i]-97]++;
                }
                if (!A[s[n/2+1+i]-97]){
                    d++;
                    A[s[n/2+1+i]-97]++;
                }
            }
            if ((25-d)+1 <= k) cout << "1"; else cout << "0";
        }
        cout << endl;
    }
    
    return 0;
}