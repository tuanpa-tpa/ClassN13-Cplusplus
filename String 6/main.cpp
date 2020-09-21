// #include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

void min(long long x,int *arr,int *d){
    while(x){
        int tmp = x%10;
        if (tmp == 6) tmp = 5;
        arr[*d] = tmp;
        (*d)++;
        x/=10;
    }
}

void max(long long x,int *arr,int *d){
    while(x){
        int tmp = x%10;
        if (tmp == 5) tmp = 6;
        arr[*d] = tmp;
        (*d)++;
        x/=10;
    }
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        long long x1,x2;
        cin >> x1 >> x2;
        int arr1[20],arr2[20];
        long long t1= 0,t2 = 0;
        int d1= 0,d2 = 0;
        min(x1,arr1,&d1);
        min(x2,arr2,&d2);
        for (int i = d1-1; i>=0;i--) t1=t1*10+arr1[i];
            for (int i = d2-1; i>=0;i--) t2=t2*10+arr2[i];
                cout << t1+t2 << " ";
            d1 = 0;d2 = 0;t1 = 0;t2= 0;
            max(x1,arr1,&d1);
            max(x2,arr2,&d2);
            for (int i = d1-1; i>=0;i--) t1=t1*10+arr1[i];
                for (int i = d2-1; i>=0;i--) t2=t2*10+arr2[i];
                    cout << t1+t2;
                cout << endl;
            }
            return 0;
        }



// #include <iostream>
// #include <string>
// #include <cstring>
// using namespace std;
// void chuyenMin(string& str){
//     for (int i = 0; i < str.size(); i++)
//         if (str[i] == '6') str[i] = '5';
// }
// void chuyenMax(string& str){
//     for (int i = 0; i < str.size(); i++)
//         if (str[i] == '5') str[i] = '6';
// }

// long long chuyenSo(string s){
//     long long t = 0;
//     for (int i = 0; i< s.size(); i++){
//         t = t*10+s[i] -'0';
//     }
//     return t;
// }


// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);cout.tie(0);
//     int t;
//     cin >> t;
//     while(t--){
//         cin.ignore();
//         string a,b,c,d;
//         cin >> a >> b;
//         c = a; d = b;
//         chuyenMin(a);chuyenMin(b);
//         chuyenMax(c);chuyenMax(d);
//         // cout << c << " " << d;
//         // khong dung ham itoi duoc :<
//         long long at = chuyenSo(a),att = chuyenSo(c);
//         long long bt = chuyenSo(b),btt = chuyenSo(d);
//         long long min = at+bt,max = att+btt;
//         cout << min << " "<< max << endl;
//     }

//     return 0;
// }