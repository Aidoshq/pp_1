#include <bits/stdc++.h>

using namespace std;

int main () {

int n ;
cin>>n;
vector <int> a(n);
for (int i=0 ; i<n ; i++) {
    cin>>a[i];
}

int x , y;
cin>>x>>y;
a.erase(a.begin()+x , a.begin()+y+1) ;
for (auto f : a) {
    cout<<f<<" ";
}




    return 0;
}