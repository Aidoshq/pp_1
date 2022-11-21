#include <bits/stdc++.h>

using namespace std;
//o
int main () {
int n , m;
cin>>n>>m;
int arr[n][m];
for (int i=0 ; i<n ; i++) {
    for (int j=0; j<m ; j++) {
        cin>>arr[i][j];
    }
}
    for (int i=0 ; i<n ; i++) {
        int sum=0;
     for (int j=0 ; j<m ; j++) {
        sum+=arr[i][j];
    }
        int g=sum/m;
        cout<<g<<" ";
    }

    return 0;
}