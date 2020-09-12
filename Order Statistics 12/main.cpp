#include <iostream>
#include <algorithm>
#include <ios>
using namespace std;

int main(){
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        int A[1000001]={0};
        int temp = 0;bool kt = false;
        int MAX = -1e6;
        for (int i = 0; i< n; i++) {
            cin >> temp;
            if (temp > MAX) MAX = temp;
            if (temp > 0) A[temp]++;
        }
        for (int i = 1; i<=MAX; i++){
            if (A[i] == 0){
                cout << i;
                kt =true;
                break;
            }
        }
        if (!kt) cout << MAX+1;
        cout << endl;
    }   
    return 0;
}

