#include <bits/stdc++.h>

using namespace std;

int main () {

int n ;
cin>>n;
vector <int> a(n);
for (int i=0 ; i<n ; i++) {
    cin>>a[i];
}

reverse(a.begin() , a.end());
for (auto f : a) {
    cout<<f<<" ";
}



    return 0;
}