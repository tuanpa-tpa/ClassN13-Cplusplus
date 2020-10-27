#include <bits/stdc++.h>
using namespace std;
class solution{
    public:
        int xau(string s){
            int dau = 0;
            int i = 0,j,k;
            int max = 1;
            while(i < s.length()){
                j = i; k= i;
                while(k < s.length()-1 && s[k+1] == s[k]) k++;
                i = k+1;
                while(j > 0 && k < s.length()-1 && s[k+1] == s[j-1]){
                    k++;
                    j--;
                }
                int temp = k-j+1;
                if (max < temp){
                    max = temp;
                    dau = j;
                }
            }
            // return s.substr(dau,max);
            return max;
        }
        
};

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        solution ob;
        cout << ob.xau(s) << endl;
    }
    return 0;
}