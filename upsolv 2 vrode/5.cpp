#include <bits/stdc++.h>

using namespace std;

int main () {
//h
int n ;
cin>>n ;
int arr[n];
int cnt=0;

int max=-123;

    for (int i=0 ; i<n ; i++) {
        cin>>arr[i];
    }

sort(arr , arr+n);
cout<<arr[n-1]*arr[n-2];




    return 0;
}