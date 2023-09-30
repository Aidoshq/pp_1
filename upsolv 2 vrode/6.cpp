#include <bits/stdc++.h>
//j
using namespace std;
int main () {
string n;
cin>>n;
char ma=n[0] , mi=n[0];
for (int i=0 ; i<n.size() ; i++) {
ma=max(ma , n[i]);
mi=min(mi , n[i]);
}

cout<<ma<<" "<<mi;


    return 0;
}