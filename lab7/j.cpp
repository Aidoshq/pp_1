#include <bits/stdc++.h>

using namespace std;

int foo(int n) {
    if(n==0) {
        return 0;
    }

    int a=n%10;
    a/=2;
    return foo(n/=10)+a;
}

int main () {

    int n;
    cin>>n;
    cout<<foo(n);

    return 0;
}