#include <bits/stdc++.h>
//b
using namespace std;

int main () {
int m , n , k , a1 , b1 , a2 , b2;
cin>>m>>n;
int arr[n][m];
for (int i=0 ; i<n ; i++) {
    for (int j=0 ; j<m ; j++) {
        arr[i][j]=1;
    }
}
cin>>k;
for (int x=0 ; x<k ; x++) {
    cin>>a1>>b1>>a2>>b2;
    for (int i=b1 ; i<b2 ; i++) {
        for (int j=a1 ; j<a2 ; j++) {
            arr[i][j]=0;
        }
    }
}
int t=0 ;
for (int i=0 ; i<n ; i++) {
    for (int j=0 ; j<m ; j++) {
        t+=arr[i][j];
    }
} cout<<t<<endl;
    return 0;
}