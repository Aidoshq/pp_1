#include <bits/stdc++.h>

using namespace std;

int foo() {
    int n;
    cin>>n;
    if(n==0) {
        return n;
    }
    return foo()+n;
}

int main () {
    cout<<foo();
    return 0;
}