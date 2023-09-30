#include <bits/stdc++.h>

using namespace std;

int foo(int n ) {
    int f=1;
    for (int i=1 ; i<=n ; i++)
f=f*i;
    return f;

}

int main () {
int n;
cin>>n;
cout<<foo(n);
    return 0;
}