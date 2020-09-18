#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n+1];
        
        for(int i = 1 ; i <= n; i++){
            cin >> a[i];
        }
        for(int i = 2; i <= n; i++){
            if(i%2==1 && a[i] > a[i-1]){
                swap(a[i],a[i-1]);
            }
            else if(i%2 == 0 && a[i] < a[i-1]){
                swap(a[i], a[i-1]);
            }
        }
        for(int i = 1; i <= n; i++){
            cout << a[i] << " ";
        }
        cout << endl;
        
    }
}