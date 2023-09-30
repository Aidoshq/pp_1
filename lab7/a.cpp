#include <bits/stdc++.h>

using namespace std;

int foo(int n) {
     if (n==0) {
          return 1;
     }
     return foo(n-1)*2;
}

int main () {
int n;
cin>>n;
cout<<foo(n);

     return 0;
}