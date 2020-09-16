#include <bits/stdc++.h>
using namespace std;
int binarySearch(int A[],int l, int r,int X){
    while (l <= r){
        int mid = (l+r)/2;
        if (A[mid] == X) return mid;
        if (A[mid] < X) return binarySearch(A,mid + 1,r,X);
        if (A[mid] > X) return binarySearch(A,l,mid -1,X);
    }
    return -1;
}
int main(){
    int n,t,k,x;

    cin >> t;
    while(t--){
        cin >> n;
        int A[n+1];
        for (int i = 1; i<= n; i++) cin >> A[i];
        cin >> k >> x;
        int tmp = binarySearch(A,1,n,x);
        if (tmp == -1) cout << "-1";
        else {
            int temp = k/2;
            for (int i = tmp - temp; i< tmp; i++) cout << A[i] << " ";
            for (int i = tmp+1; i<= temp+tmp; i++) cout << A[i] << " ";
        }
        cout << endl;
    }
    return 0;
}