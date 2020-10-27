#include <bits/stdc++.h>
using namespace std;


void min(long long x,int *A,int *d){
    while(x){
        int temp = x%10;
        if (temp == 6) temp = 5;
        A[*d]= temp;
        (*d)++;
        x/=10;
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        long long s1,s2;
        cin >> s1 >> s2;
        int A[20],B[20];
        int d1= 0,d2 = 0;
        min(s1,A,&d1);
        min(s2,B,&d2);
        long long t1=0,t2=0;
        for (int i = d1 - 1; i>= 0; i--) t1 = t1*10 + A[i];
        for (int i = d2 - 1; i>= 0; i--) t2 = t2*10 + B[i];
        cout << t1 + t2 << " ";
        t1 = 0,t2 = 0;
        for (int i = d1 - 1; i>= 0; i--) {
            if (A[i] == 5) A[i] = 6;
            t1 = t1*10 + A[i];
        }
        for (int i = d2 - 1; i>= 0; i--){
            if (B[i] == 5) B[i] = 6;
            t2 = t2*10 + B[i];  
        } 
        cout << t1+ t2 << endl;
    }
    return 0;
}