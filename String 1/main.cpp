#include <iostream>
#include <algorithm>
#include <ios>
#include <string>
#include <ctime>
using namespace std;
int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(0);cout.tie(0);
    int t,k;string s;
    cin >> t;
    while(t--){
        int start = clock();
        int A[26];
        cin.ignore();
        getline(cin ,s);
        cin >> k;
        if (s.size() >= 25){
            for (int i = 0; i< s.size();i++){
            // int temp = (int)(s[i]);
            A[(int)(s[i])-97]++;
        }
        int d = 0;
        for (int i = 0; i<= 25; i++) if (A[i] != 0) d++;
        if ((26-d) <= k) cout << "1"; else cout << "0";

        } else cout << "0";
        int end = clock();
        double temp = ((double)(end-start))/CLOCKS_PER_SEC;
        cout << temp;
        
        cout << endl;
    }
    return 0;
}