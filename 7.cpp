#include <bits/stdc++.h>
//l
using namespace std;

int main () {
int n , m ;
cin>>n>>m;
int arr[n][m];

int max=-123;

for (int i=0 ; i<n ; i++) {
    for (int j=0 ; j<m ; j++) {
        cin>>arr[i][j];
    }
}  

int q;
cin>>q;

for (int i=0 ; i<n ; i++) {
    for (int j=0 ; j<m ; j++) {
        if (max<arr[i][j]) {
            max=arr[i][j];
        }
    }
}
if (max>q) {
    cout<<"Penalty!";
} else {
    cout<<"No penalty for today.";
}



    return 0;
}