#include <bits/stdc++.h>
using namespace std;
void input(int n, int A[105][105]){
    for (int i = 0; i< n; i++){            
		    for (int j = 0; j< n; j++){
                cin >> A[i][j];
            }            
        }
}
int solution(int n, int A[105][105]){
     vector<int>::iterator it;
        vector<int> ins(A[0],A[0]+n);
        for (int i = 1; i< n; i++){
            sort(ins.begin(),ins.end());
            sort(A[i],A[i]+n);
            it = std::set_intersection(ins.begin(),ins.end(),A[i],A[i]+n,ins.begin()); 
            ins.resize(it - ins.begin());
            // for (int j= 0; j< ins.size(); j++){
            //     cout << ins[j] << " ";
            // }
            // cout << endl<< "----"<<endl;
        }
    return ins.size();
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
        int A[105][105];
        input(n,A);
        cout << solution(n,A) << endl;
	}
	return 0;
}