#include <bits/stdc++.h>

using namespace std;

void foo(int n , int k) {
    int a[n];
    for (int i=0 ; i<n ; i++) {
        cin>>a[i];
    }
    cin>>k;
    for (int i=0 ; i<n ; i++) {
        if (a[i]==k) {
            cout<<"Yes";
            return ;
        }
    }
    cout<<"No";
}

int main () {
    int n , k;
    cin>>n;
    foo(n , k);
return 0;
}