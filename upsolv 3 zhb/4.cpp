#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string s="", dict="0123456789ABCDEF";
    cin >> n;
    while ( n>0 ){
        s=dict[n%16]+s;
        n/=16;
    }
    cout << s;
    return 0;
}