#include <bits/stdc++.h>
using namespace std;

int main() {
int n,m;
cin>>n>>m;
int arr[n][m];
int cnt=0;
int max=-123123;
int a,b;
for (int i=0 ; i<n ; i++) {
    for (int j=0 ; j<m ; j++) {
        cin>>arr[i][j];
        
    }
} 
for (int i=0 ; i<n ; i++) {
    for (int j=0 ; j<m ; j++) {
        if (i<j && i==0) {
           a= arr[0][0]+arr[i][n-1];
        
        //   cout<<a;
        } 
        if (i>j) {
          b=arr[1][0]+arr[n-1][n-1] ;
        }
    }
}
if (max<a) {
    max=a;
    cnt++;
} else {
    max=b;
}
// bool flag=1;
//  for (int i=0 ; i<n ; i++) {
//     for (int j=0 ; j<m ; j++) {
//         if (flag) {
//             cnt++;
//             break;
//         }
//     } 
//  } 
cout<<max<<" "<<cnt-1;

    return 0;
}