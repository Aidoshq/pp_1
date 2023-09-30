#include <bits/stdc++.h>

using namespace std;

int foo(int n , int v ) {
 int gcd= min(n , v) ;

while (n%gcd!=0 || v%gcd!=0) {
    gcd--;
}

return gcd;
}

int main () {
    int n;
    cin>>n;
    int arr[n];
    for (int i=0 ; i<n ; i++) {
        cin>>arr[i];
    }
    int max=0;
for (int i=0 ; i<n ; i++) {
    for (int j=i+1 ; j< n ; j++) {
        int gcd=foo(arr[i] , arr[j]);
        if(max<gcd) {
            max=gcd;
        }
    }
} cout<<max;

return 0;
}