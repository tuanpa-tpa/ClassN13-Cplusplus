#include <iostream>
#include <algorithm>
using namespace std ;
int a[25],n = 0;
bool ok = false;
void xuat(){
    for (int i = 0; i< n ; i++){
        cout << a[i];
    }
    cout << " ";
}
void sinh(){
    int i = n-2;
    while (a[i] > a[i+1]) i--;
    if (i < 0)  ok = true;
    else {
        int j = n-1;
        while (a[i] > a[j]) j--;
        swap(a[i],a[j]);
        int d = i+1,c= n-1;
        while (d < c){
            swap(a[d],a[c]);
            d++; c--;
        }
    }
}
int main() {
    int t;
    cin>> t;
    while(t--){
      cin >> n;
      ok = false;
        for (int i = 0 ; i< n ; i++) a[i] = i+1;
        while (!ok){
            xuat();
            sinh();
        }
    cout << endl;  
    }
    
    return 0;
}
