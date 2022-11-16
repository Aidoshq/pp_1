#include <bits/stdc++.h>

using namespace std;

int main () {
int n , m , k;
cin>>n;
int arr[n];
int cnt=0;
for (int i=0 ; i<n ; i++) {
    cin>>arr[i];
}

for (int i=0 ; i<n ; i++) {
    if (arr[i]==arr[i+1]) {
        cnt++;
        if (cnt>arr[i]) {
            cnt++;
        }
        m=arr[i];
    } else {
        k=arr[i];
    }
    // cout<<k<<" ";
}  cout<<m;


    return 0;
}