#include <bits/stdc++.h>
using namespace std;

struct arrayE{
	int temp ;
	int count ;
};
bool kt1(arrayE a, arrayE b){
	return a.temp < b.temp;
}

bool kt(arrayE a, arrayE b){
	return a.count > b.count;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,temp,element = 0;
		arrayE A[10001]; //  tao mang struct
		cin >> n;
		for (int i = 0; i< n; i++){
			cin >> temp; //  nhap input
			bool check = false; // ban dau cho bang false de kiem tra xem co phan tu day trong mang chua
			for (int j = 0;j < element;j++){ // duyet tu dau mang den phan tu cuoi
				if (temp == A[j].temp){
					check = true; // phan tu da co trong mang
					A[j].count++; // tang gia tri index len 1
					break;
				}
			}
			if (!check){ // neu phan tu chua co trong mang
				A[element].temp = temp; // gan gia tri day bang temp
				A[element].count = 1; // co 1 lan xuat hien
				element++; // tang bo nho cua mang
			}
		}
		stable_sort(A,A+element,kt1); // sap xep theo chieu tang gia tri mang
		stable_sort(A,A+element,kt);  //. sap xep theo so lan xuat hien
		for (int i = 0; i< element; i++){
			for (int j = 0; j< A[i].count; j++)
				cout << A[i].temp << " ";
		}
		cout << endl;
	}
	return 0;
}