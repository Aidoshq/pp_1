#include <bits/stdc++.h>

using namespace std;

void foo(int a) {
    if(a>1) {
        foo(a-1);
    }
    cout<<a<<" ";
}

int main () {
    int n;
    cin>>n;
    foo(n);
    return 0;
}