#include <bits/stdc++.h>

using namespace std;

int foo (string s , int x) {
if (s.size()==x) {
    return 0;
}
if (s[x]%2==0) {
    return foo(s , x+1)+1;
}
return foo(s , x+1);
}

int main () {
    string s;
    cin>>s;
    cout<<foo(s , 0);
    return 0;
}