// #include <bits/stdc++.h>
// using namespace std;
// int main(){
// 	ios_base::sync_with_stdio(false);
// 	cin.tie(0);cout.tie(0);
// 	int t;
// 	cin >> t;
// 	while(t--){
// 		int n,m;
// 		cin >> n >> m;
// 		int A[1000005]= {0},MAX = 0,tmp;
// 		for (int i = 0; i< n; i++) {
// 			cin >> tmp;
// 			A[tmp]++;
// 			MAX = max(tmp,MAX);
// 		}
// 		for (int i = 0; i< m; i++) {
// 			cin >> tmp;
// 			if (A[tmp] > 0){
// 				for (int i = 1; i<= A[tmp];i++)
// 					cout << tmp << " ";
// 				A[tmp] = 0;
// 			}
// 		}
// 		for (int i = 1; i<= MAX; i++)
// 			if (A[i] > 0) cout << i << " ";
// 		cout << endl;
// 	}
// 	return 0;
// }
#include <bits/stdc++.h> 
using namespace std; 
void pri(int a1[], int a2[], int n, int m) { 
    map<int, int> mp; 
    map<int, int>::iterator it; 
    for (int i = 0; i < n; i++) 
        mp[a1[i]]++; 
    for (int i = 0; i < m; i++) { 
        if (mp.find(a2[i]) != mp.end()) { 
            it = mp.find(a2[i]); 
            for (int j = 0; j < it->second; j++) 
                cout << it->first << " "; 
            mp.erase(a2[i]); 
        } 
    } 
    for (it = mp.begin(); it != mp.end(); it++) { 
        for (int j = 0; j < it->second; j++) 
            cout << it->first << " "; 
    } 
    cout << endl; 
} 
int main() { 
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		int A[n+1],B[m+1];
		for (int i = 0; i< n;i++) cin >> A[i];
		for (int i = 0; i< m;i++) cin >> B[i];
		pri(A, B, n, m); 
	} 
    return 0; 
} 