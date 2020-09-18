#include <bits/stdc++.h>
using namespace std;
long long A[93];

void fibonacci(){
  A[0] = 0; A[1] = 1;
  for (int i = 2; i<=92; i++)
  A[i] = A[i-1]+A[i-2];
}

int main(){
  int t= 1;
  fibonacci();
  long long n = 8;
  cin >> t;
  while(t--){
    cin >> n;
    if (binary_search(A,A+92,n)) cout << "YES";
    else cout << "NO";
    cout << endl;
  }
  return 0;
}
