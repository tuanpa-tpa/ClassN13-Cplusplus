// #include <bits/stdc++.h>
// using namespace std;

// unsigned long long amodM (string s,long long m){
// 	unsigned long long tmp = 0;
// 	for (int i = 0 ; i < s.size();i++){
// 		tmp = (tmp*10 + s[i] - '0')%m;
// 	}
// 	return tmp;
// }

// unsigned long long kq(string &s,long long b, long long m){
// 	unsigned long long temp = amodM(s,m);
// 	unsigned long long nul = temp;
// 	for (long long i = 1; i< b; i++){
// 		temp = (nul*temp%m)%m;
// 	}
// 	return temp;
// }


// int main(){
// 	int t = 1;
// 	cin >> t;
// 	cin.ignore();
// 	while(t--){
// 		string a = "987584345091051645734583954832576";
// 		cin >> a;
// 		long long b = 3,m = 11;
// 		cin >> b >> m;
// 		cout << kq(a,b,m) << endl;
// 	}
// 	return 0;
// }


#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string a;
		ll b,m,newX=0;
		cin>> a >> b >> m;
		for(int i=0 ; i<a.size() ; i++){
			newX = (newX * 10 + a[i] - '0')%m;
		}
		ll res=1;
		while (b > 0) { 
	        if (b & 1)  
	            res = (res*newX) % m;
	        b /= 2;
	        newX = (newX*newX) % m;
    	}   
		cout<< res <<endl;
		
	}
}