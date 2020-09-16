#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(0);cin.tie(0);
    int n,temp,k,t;
    cin >> t;
    while (t--){
        vector<int> A;
        A.clear();
        cin >> n >> k;
        for (int i = 0; i< n; i++){
            cin >> temp;
            A.push_back(temp);
        }
        sort(A.begin(),A.end());
        int countEqual = 0;
        while(A[A.size()-1] - A[0] > k) A.pop_back();// xoa phan tu tru sai
        int temp = A.size()-1;
        while(A[temp]- A[0] == k) temp--;
        long long countRes = (temp*(temp+1))/2;
        cout << countRes << endl;
        for (int i = temp; i < A.size();i++){
            for (int j = 1; j< A.size()-1;j++)
                cout << A[i] - A[j] << endl;
        }
        // cout << --countRes;
        cout << endl;
    }
    return 0;
}