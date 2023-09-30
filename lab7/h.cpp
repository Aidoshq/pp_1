#include <bits/stdc++.h>

using namespace std;

int foo(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    return foo(n-1)+foo(n-2);
}

int main () {
    int n;
    cin>>n;
    cout<<foo(n);
    return 0;
}