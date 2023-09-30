#include <bits/stdc++.h>
using namespace std;
int main () {
int n,b=0;
cin>>n;
int arr[n];
// int cnt=0;
for (int i=0 ; i<n ; i++) {
    cin>>arr[i];
//     if (arr[i]%3==0) {
// cnt++;
// cnt=arr[i];
//     } cout<<cnt;
// } 
b+=pow(arr[i],3);
cout<<b;





}
//intensiv
    return 0;
}